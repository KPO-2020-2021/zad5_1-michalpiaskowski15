#include "droniarz.hh"

Droniarz::Droniarz(){

}

Droniarz::Droniarz(std::string nazwa_korpusu, std::string nazwa_rotora0,
        std::string nazwa_rotora1, std::string nazwa_rotora2, std::string nazwa_rotora3,
vector3d srodek, matrix3d orient){

    vector3d przesunecie_w_gore = vector3d(0,0,1);
    this->korpus = Cuboid(srodek, nazwa_korpusu,orient);
    this->korpus.szukanie_pozycji();
    vector3d position_rotor = this->korpus[3];
    position_rotor = position_rotor + przesunecie_w_gore;
    this->rotory[0] = Graniastoslup(position_rotor,nazwa_rotora0,orient);
    position_rotor = this->korpus[2];
    position_rotor = position_rotor + przesunecie_w_gore;
    this->rotory[1] = Graniastoslup(position_rotor,nazwa_rotora1,orient);
    position_rotor = this->korpus[6];
    position_rotor = position_rotor + przesunecie_w_gore;
    this->rotory[2] = Graniastoslup(position_rotor,nazwa_rotora2,orient);
    position_rotor = this->korpus[7];
    position_rotor = position_rotor + przesunecie_w_gore;
    this->rotory[3] = Graniastoslup(position_rotor,nazwa_rotora3,orient);

    this->srodek = this->korpus.Wez_srodek();
}

void Droniarz::translacja(vector3d translacja){
    vector3d tmp;
    tmp = this->srodek + translacja;
    korpus.Ustaw_srodek(tmp);

    tmp = this->rotory[0].Wez_srodek();
    tmp = tmp + translacja;
    rotory[0].Ustaw_srodek(tmp);

    tmp = this->rotory[1].Wez_srodek();
    tmp = tmp + translacja;
    rotory[1].Ustaw_srodek(tmp);

    tmp = this->rotory[2].Wez_srodek();
    tmp = tmp + translacja;
    rotory[2].Ustaw_srodek(tmp);

    tmp = this->rotory[3].Wez_srodek();
    tmp = tmp + translacja;
    rotory[3].Ustaw_srodek(tmp);

}
/**
 * @brief Obrot
 * 
 * @param macierz_obrotu 
 */
void Droniarz::obrot(matrix3d macierz_obrotu){
    matrix3d tmp;
    tmp = this->korpus.Wez_orientacje();
    tmp = macierz_obrotu * tmp;
    this->korpus.Ustaw_orientacje(tmp);

    tmp = this->rotory[0].Wez_orientacje();
    tmp = macierz_obrotu * tmp;
    this->rotory[0].Ustaw_orientacje(tmp);

    tmp = this->rotory[1].Wez_orientacje();
    tmp = macierz_obrotu * tmp;
    this->rotory[1].Ustaw_orientacje(tmp);

    tmp = this->rotory[2].Wez_orientacje();
    tmp = macierz_obrotu * tmp;
    this->rotory[2].Ustaw_orientacje(tmp);

    tmp = this->rotory[3].Wez_orientacje();
    tmp = macierz_obrotu * tmp;
    this->rotory[3].Ustaw_orientacje(tmp);


}
/**
 * @brief Szukanie pozycji
 * 
 */
void Droniarz::szukanie_pozycji(){
    this->korpus.szukanie_pozycji();
        for(int i = 0; i < 4; ++i){
            this->rotory[i].szukanie_pozycji(this->korpus.Wez_srodek());
        }
    this->srodek = this->korpus.Wez_srodek();
}
/**
 * @brief 
 * 
 * @return Cuboid 
 */
Cuboid Droniarz::Wez_korpus(){
    return korpus;
}
/**
 * @brief 
 * 
 * @param index 
 * @return Graniastoslup 
 */
Graniastoslup Droniarz::Wez_rotor(int index){
    return rotory[index];
}
/**
 * @brief Przeszkody
 * 
 * @return std::string 
 */
std::string Droniarz::jaka_przeszkoda(){
    return std::string("dron");
}

/**
 * @brief Obrot rotorow
 * 
 * @param obrot 
 */
void Droniarz::obrot_rotorow(matrix3d obrot){
    vector3d tmp;
    vector3d pozycja;
    vector3d pozycja_korpusu = this->korpus.Wez_srodek();

    for(int j = 0; j<4; ++j){
        this->rotory[j].czyt_wierzcholki_z_pliku();
        this->rotory[j].rotacja(obrot);
        pozycja = this->rotory[j].Wez_srodek();
        pozycja = pozycja - pozycja_korpusu;
        this->rotory[j].translacja(pozycja);
        this->rotory[j].rotacja(this->rotory[j].Wez_orientacje());
        this->rotory[j].translacja(this->korpus.Wez_srodek());
    }

}