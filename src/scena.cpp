#include "scena.h"
#include "przeszkoda1.h"
#include "graniastoslup.hh"

scena::scena(){

    this->promien_drona = 6.4;
    this->rozmiar_przeszkody = 6;
    this->index_drona = 0;
    matrix3d orient = matrix3d();
    vector3d pozycja_drona1 = vector3d(20, 20, 1);
    vector3d pozycja_drona2 = vector3d(100, 20, 1);
    std::shared_ptr<Droniarz> dronLewy = std::make_shared<Droniarz>("../datasets/korpus1.dat","../datasets/rotor10.dat", "../datasets/rotor11.dat",
                          "../datasets/rotor12.dat", "../datasets/rotor13.dat", pozycja_drona1,orient);

    std::shared_ptr<Droniarz> dronPrawy = std::make_shared<Droniarz>("../datasets/korpus2.dat","../datasets/rotor20.dat", "../datasets/rotor21.dat",
                                                                    "../datasets/rotor22.dat", "../datasets/rotor23.dat", pozycja_drona2,orient);
    this->wszystkie_drony.push_back(dronLewy);
    this->wszystkie_drony.push_back(dronPrawy);

    vector3d pozycja1 = vector3d(50, 20, 1);
    vector3d pozycja2 = vector3d(30, 30, 1);
    vector3d pozycja3 = vector3d(40, 40, 1);
    vector3d pozycja4 = vector3d(50, 50, 1);
    vector3d skala1 = vector3d(1,1,1);
    vector3d pozycja5 = vector3d(78, 86, 1);


    this->wszystkie_przeszkody.push_back(dronLewy);
    this->wszystkie_przeszkody.push_back(dronPrawy);
    this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda1>(pozycja1,"../datasets/przeszkoda1.dat", "../datasets/przeszkoda1_rys.dat", skala1));
    this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda2>(pozycja2,"../datasets/przeszkoda2.dat", "../datasets/przeszkoda2_rys.dat", skala1));
    this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda3>(pozycja3,"../datasets/przeszkoda3.dat", "../datasets/przeszkoda3_rys.dat", skala1));
    this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda2>(pozycja4,"../datasets/przeszkoda2.dat", "../datasets/przeszkoda4_rys.dat", skala1));
    this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda3>(pozycja5,"../datasets/przeszkoda3.dat", "../datasets/przeszkoda5_rys.dat", skala1));

    for(int j = 0; j < 2; ++j){
        this->wszystkie_drony[j]->szukanie_pozycji();
        gnuplot.DodajNazwePliku(this->wszystkie_drony[j]->Wez_korpus().Zapis_wierzcholki().c_str())
                .ZmienSposobRys(PzG::SR_Ciagly)
                .ZmienSzerokosc(2)
                .ZmienKolor(1);

        for(int i = 0; i<4; ++i){
            gnuplot.DodajNazwePliku(this->wszystkie_drony[j]->Wez_rotor(i).Zapis_wierzcholki().c_str())
                    .ZmienSposobRys(PzG::SR_Ciagly)
                    .ZmienSzerokosc(2)
                    .ZmienKolor(2);
        }
    }


    for(int i = 2; i < this->wszystkie_przeszkody.size(); ++i){
        gnuplot.DodajNazwePliku(this->wszystkie_przeszkody[i]->Zapis_wierzcholki().c_str())
            .ZmienSposobRys(PzG::SR_Ciagly)
            .ZmienSzerokosc(2)
            .ZmienKolor(3);
    }

    std::ofstream x;
    x.open("../datasets/linia_lotu.dat");
    x.close();
    gnuplot.DodajNazwePliku("../datasets/linia_lotu.dat")
            .ZmienSposobRys(PzG::SR_Ciagly)
            .ZmienSzerokosc(2)
            .ZmienKolor(4);

    x.open("../datasets/tlo.dat");
    x.close();
    gnuplot.DodajNazwePliku("../datasets/tlo.dat")
            .ZmienSposobRys(PzG::SR_Ciagly)
            .ZmienSzerokosc(1)
            .ZmienKolor(5);


    gnuplot.ZmienTrybRys(PzG::TR_3D);
    gnuplot.UstawZakresX((0), 200);
    gnuplot.UstawZakresY((0), 200);
    gnuplot.UstawZakresZ((-10), 40);
}
/**
 * @brief Rysowanie sceny
 * 
 */
void scena::rysowanie_sceny(){
    std::ofstream x;
    for(int i = 2; i < this->wszystkie_przeszkody.size(); ++i) {
        this->wszystkie_przeszkody[i]->szukanie_pozycji();
        x.open(this->wszystkie_przeszkody[i]->Zapis_wierzcholki());
        x << *(wszystkie_przeszkody[i]);
        x.close();
    }

    for(int j = 0; j < 2; ++j){
        Cuboid tmp; Graniastoslup tmpGr;
        x.open(this->wszystkie_drony[j]->Wez_korpus().Zapis_wierzcholki());
        tmp = this->wszystkie_drony[j]->Wez_korpus();
        x << tmp;
        x.close();

        for(int i = 0; i<4;++i){
            x.open(this->wszystkie_drony[j]->Wez_rotor(i).Zapis_wierzcholki());
            tmpGr = this->wszystkie_drony[j]->Wez_rotor(i);
            x << tmpGr;
            x.close();
        }
    }

    x.open("../datasets/tlo.dat");
    for(int i = 0; i <= 200; i+=10){
        for(int j = 0; j <= 200; j += 10){
            x << j << " " << i+10 << " 0\n";
            x << j << " " << i << " 0\n";
            if(j < 200){
                x << "#\n\n";
            }
        }
        x << 0 << " " << i << " 0\n#\n\n";
    }
    x.close();

    gnuplot.Inicjalizuj();
    gnuplot.Rysuj();
}
/**
 * @brief Animacja lotu drona
 * 
 * @param dlugosc 
 * @param kat 
 */
void scena::animcja_lotu(double dlugosc, double kat){

    vector3d wektor_lotu = vector3d(dlugosc, 0 ,0);
    matrix3d kierunek = matrix3d(kat, 'z');
    wektor_lotu = kierunek * wektor_lotu;


    wszystkie_drony[this->index_drona]->obrot(kierunek);
    rysowanie_sceny();
    vector3d wektor_jednostkowy;
    wektor_jednostkowy = wektor_lotu / wektor_lotu.dlugosc();
    std::ofstream x;

    while(sprawdz_trase(wektor_lotu)){
        zapisz_linie_lotu(wektor_lotu, 20);
        wektor_lotu = wektor_lotu + wektor_jednostkowy;
        usleep(100);
        rysowanie_sceny();
    }

    zapisz_linie_lotu(wektor_lotu, 20);

    lot_w_gore(20);


    vector3d wektor_animacji = wektor_jednostkowy;
    matrix3d macierz_animacji = matrix3d(15, 'z');
    matrix3d macierz_maly_kat = matrix3d(15,'z');

    while(wektor_animacji.dlugosc() < wektor_lotu.dlugosc()){
        wszystkie_drony[this->index_drona]->translacja(wektor_jednostkowy);
        wektor_animacji = wektor_animacji + wektor_jednostkowy;
        usleep(50000);
        wszystkie_drony[this->index_drona]->szukanie_pozycji();
        rysowanie_sceny();


        for(int k = 0; k < 10; ++k) {
            this->wszystkie_drony[this->index_drona]->obrot_rotorow(macierz_animacji);
            macierz_animacji = macierz_maly_kat * macierz_animacji;
            rysowanie_sceny();
            usleep(1000);
        }
    }


    lot_w_gore(-20);

    x.open("../datasets/linia_lotu.dat");
    x.close();
}
/**
 * @brief Indeksowanie drona
 * 
 * @param index 
 */
void scena::ustaw_index(int index){
    this->index_drona = index;
}

void scena::lot_w_gore(double wysokosc){
    vector3d wektor_lotu = vector3d(0,0,wysokosc);
    vector3d wektor_jednostkowy;
    wektor_jednostkowy = wektor_lotu / wektor_lotu.dlugosc();
    vector3d wektor_animacji = wektor_jednostkowy;\
    matrix3d macierz_animacji = matrix3d(15, 'z');
    matrix3d macierz_maly_kat = matrix3d(15,'z');

    while(wektor_animacji.dlugosc() < wektor_lotu.dlugosc()){
        wszystkie_drony[this->index_drona]->translacja(wektor_jednostkowy);
        wektor_animacji = wektor_animacji + wektor_jednostkowy;
        usleep(50000);
        wszystkie_drony[this->index_drona]->szukanie_pozycji();
        rysowanie_sceny();

        /*ruch rotora*/
        for(int k = 0; k < 10; ++k) {
            this->wszystkie_drony[this->index_drona]->obrot_rotorow(macierz_animacji);
            macierz_animacji = macierz_maly_kat * macierz_animacji;
            rysowanie_sceny();
            usleep(500);
        }
    }
}
/**
 * @brief Zapis linii lotu
 * 
 * @param wektor_lotu 
 * @param wysokosc 
 */
void scena::zapisz_linie_lotu(vector3d &wektor_lotu, double wysokosc){
    vector3d vec1;
    vector3d vec2;
    std::ofstream x;

    x.open("../datasets/linia_lotu.dat");
    vec1 = this->wszystkie_drony[this->index_drona]->Wez_korpus().Wez_srodek();
    x << vec1 << std::endl;
    vec2 = vector3d(0,0,wysokosc);
    vec2 = vec2 + vec1;
    x << vec2 << std::endl;
    vec2 = vec2 + wektor_lotu;
    x << vec2 <<std::endl;
    vec1 = vector3d(0,0,wysokosc);
    vec2 = vec2 - vec1;
    x << vec2 << std::endl;
    x.close();
}
/**
 * @brief Dodawanie przeszkody
 * 
 * @param _x 
 * @param _y 
 * @param typ 
 * @param nazwa_przeszkody 
 */
void scena::dodaj_przeszkode(double _x, double _y, char typ, std::string nazwa_przeszkody){

    vector3d pozycja = vector3d(_x,_y,1);
    vector3d skala = vector3d(1,1,1);
    nazwa_przeszkody = std::string("../datasets/") + nazwa_przeszkody + std::string(".dat");

    switch (typ) {
        case '1':
            this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda1>(pozycja ,"../datasets/przeszkoda1.dat", nazwa_przeszkody.c_str(), skala));
            break;
        case '2':
            this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda2>(pozycja ,"../datasets/przeszkoda2.dat", nazwa_przeszkody.c_str(), skala));
            break;
        case '3':
            this->wszystkie_przeszkody.push_back(std::make_shared<Przeszkoda3>(pozycja ,"../datasets/przeszkoda3.dat", nazwa_przeszkody.c_str(), skala));
            break;;
        default:
            break;

    }


    std::ofstream x;
    x.open(nazwa_przeszkody);
    x.close();
    gnuplot.DodajNazwePliku(this->wszystkie_przeszkody.back()->Zapis_wierzcholki().c_str())
            .ZmienSposobRys(PzG::SR_Ciagly)
            .ZmienSzerokosc(1)
            .ZmienKolor(1);

    this->wszystkie_przeszkody.back()->szukanie_pozycji();
    rysowanie_sceny();

}
/**
 * @brief Usuwanie przeszkody
 * 
 * @param index 
 */
void scena::usun_przeszkode(int index){

    std::ofstream x;

    switch (index) {
        case 0:
            throw std::exception();
            break;
        case 1:
            throw std::exception();
            break;
        default:
            x.open(this->wszystkie_przeszkody[index]->Zapis_wierzcholki());
            x.close();
            break;
    }
    this->wszystkie_przeszkody.erase(this->wszystkie_przeszkody.begin() + index);
}
/**
 * @brief Sprawdzanie trasy
 * 
 * @param trasa 
 * @return true 
 * @return false 
 */
bool scena::sprawdz_trase(vector3d &trasa){
    vector3d nowa_pozycja_drona = this->wszystkie_drony[this->index_drona]->Wez_srodek();
    nowa_pozycja_drona = nowa_pozycja_drona + trasa;


    for(int i = 0; i < this->wszystkie_przeszkody.size(); ++i){
        if((abs(nowa_pozycja_drona[0] - this->wszystkie_przeszkody[i]->Wez_srodek()[0]) < this->promien_drona + this->rozmiar_przeszkody)&&
                (abs(nowa_pozycja_drona[1] - this->wszystkie_przeszkody[i]->Wez_srodek()[0]) < this->promien_drona + this->rozmiar_przeszkody)){
            return true;
        }
    }
    return false;
}

