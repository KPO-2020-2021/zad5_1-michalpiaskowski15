#include "graniastoslup.hh"
/**
 * @brief Construct a new Graniastoslup:: Graniastoslup object
 * 
 */
Graniastoslup::Graniastoslup(){

}

Graniastoslup::Graniastoslup(vector3d pozycja, std::string zapis_graniastoslup, matrix3d orientacja){
    this->orientacja = orientacja;
    this->czyt_wierzcholki = "../datasets/graniastoslup.dat";
    this->zapis_wierzcholkow = zapis_graniastoslup;
    this->srodek = pozycja;
}
/**
 * @brief Rotacja
 * 
 * @param macierz_rotacji 
 */
void Graniastoslup::rotacja(matrix3d macierz_rotacji){
    for(int i = 0; i < 12; i++)
        this->wierzcholki[i] = macierz_rotacji * this->wierzcholki[i];
}
/**
 * @brief Translacjka
 * 
 * @param tmp 
 */
void Graniastoslup::translacja(vector3d tmp){
    for(int i = 0; i < 12; i++)
        this->wierzcholki[i] = this->wierzcholki[i] + tmp;
}
/**
 * @brief Czytanie wierzcholkow - plik
 * 
 */
void Graniastoslup::czyt_wierzcholki_z_pliku(){
    std::ifstream plik;
    std::string tmp;
    std::stringstream strumien_pomocniczy;
    int i = 0;
    plik.open(this->czyt_wierzcholki);

    while (getline(plik,tmp)){
        strumien_pomocniczy << tmp;
        strumien_pomocniczy >> this->wierzcholki[i];
        i++;
        strumien_pomocniczy = std::stringstream();
    }
    plik.close();
}
/**
 * @brief Szukanie pozycji
 * 
 * @param pozycja_korpusu 
 */
void Graniastoslup::szukanie_pozycji(vector3d pozycja_korpusu){
    czyt_wierzcholki_z_pliku();

    for (int i = 0; i < 12; ++i){
        this->wierzcholki[i] = this->srodek + this->wierzcholki[i];
    }
    for (int i = 0; i < 12; ++i){
        this->wierzcholki[i] = this->wierzcholki[i] - pozycja_korpusu;
    }
    for (int i = 0; i < 12; ++i){
        this->wierzcholki[i] = this->orientacja * this->wierzcholki[i];
    }
    for (int i = 0; i < 12; ++i){
        this->wierzcholki[i] = this->wierzcholki[i] + pozycja_korpusu;
    }
}

std::ostream & operator <<(std::ostream & x, Graniastoslup &objekt){
    x << std::setprecision(10) << std::fixed;

    vector3d tmp1 = objekt[11];
    tmp1 = tmp1 - objekt[8];
    tmp1 = tmp1 / 2;
    tmp1 = tmp1 + objekt[8];

    vector3d tmp2 = objekt[5];
    tmp2 = tmp2 - objekt[2];
    tmp2 = tmp2 / 2;
    tmp2 = tmp2 + objekt[2];

    x << tmp1 << std::endl;
    x << objekt[6] << std::endl;
    x << objekt[0] << std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[7]<< std::endl;
    x << objekt[1]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[8]<< std::endl;
    x << objekt[2]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[9]<< std::endl;
    x << objekt[3]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[10]<< std::endl;
    x << objekt[4]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[11]<< std::endl;
    x << objekt[5]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[6]<< std::endl;
    x << objekt[0]<< std::endl;
    x << tmp2 << "\n#\n\n";

    return  x;
}

const vector3d & Graniastoslup::operator[](int index) const{

    switch (index) {
        case 0:
            return this->wierzcholki[0];
        case 1:
            return this->wierzcholki[1];
        case 2:
            return this->wierzcholki[2];
        case 3:
            return this->wierzcholki[3];
        case 4:
            return this->wierzcholki[4];
        case 5:
            return this->wierzcholki[5];
        case 6:
            return this->wierzcholki[6];
        case 7:
            return this->wierzcholki[7];
        case 8:
            return this->wierzcholki[8];
        case 9:
            return this->wierzcholki[9];
        case 10:
            return this->wierzcholki[10];
        case 11:
            return this->wierzcholki[11];

        default:
            std::cout <<" blad";
            throw std::exception();
    }
}

vector3d & Graniastoslup::operator[](int indeks){

    switch (indeks) {
        case 0:
            return this->wierzcholki[0];
        case 1:
            return this->wierzcholki[1];
        case 2:
            return this->wierzcholki[2];
        case 3:
            return this->wierzcholki[3];
        case 4:
            return this->wierzcholki[4];
        case 5:
            return this->wierzcholki[5];
        case 6:
            return this->wierzcholki[6];
        case 7:
            return this->wierzcholki[7];
        case 8:
            return this->wierzcholki[8];
        case 9:
            return this->wierzcholki[9];
        case 10:
            return this->wierzcholki[10];
        case 11:
            return this->wierzcholki[11];

        default:
            std::cout <<" blad";
            throw std::exception();
    }
}