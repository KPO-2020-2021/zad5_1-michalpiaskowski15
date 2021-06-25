#include "obiekt_sceny.h"

vector3d &obiekt_sceny::operator [] (int index){
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
        default:
            std::cout <<" blad";
            throw std::exception();

    }
}

const vector3d &obiekt_sceny::operator [] (int index) const{
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
        default:
            std::cout <<" blad";
            throw std::exception();

    }
}

std::ostream &operator <<(std::ostream &x, obiekt_sceny &objekt){
    x << std::setprecision(10) << std::fixed;

    vector3d tmp1 = objekt[2];
    tmp1 = tmp1 - objekt[0];
    tmp1 = tmp1 / 2;
    tmp1 = tmp1 + objekt[0];

    vector3d tmp2 = objekt[6];
    tmp2 = tmp2 - objekt[4];
    tmp2 = tmp2 / 2;
    tmp2 = tmp2 + objekt[4];


    x << tmp1 << std::endl;
    x << objekt[2] << std::endl;
    x << objekt[6] << std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[1]<< std::endl;
    x << objekt[5]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[0]<< std::endl;
    x << objekt[4]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[3]<< std::endl;
    x << objekt[7]<< std::endl;
    x << tmp2 << "\n#\n\n";

    x << tmp1<< std::endl;
    x << objekt[2]<< std::endl;
    x << objekt[6]<< std::endl;
    x << tmp2 << "\n#\n\n";

    return x;

}

std::string obiekt_sceny::Czyt_wierzcholki(){
    return this->czyt_wierzcholki;
}

std::string obiekt_sceny::Zapis_wierzcholki(){
    return this->zapis_wierzcholkow;
}

vector3d obiekt_sceny::Wez_srodek(){
    return this->srodek;
}

matrix3d obiekt_sceny::Wez_orientacje(){
    return this->orientacja;
}

vector3d obiekt_sceny::Wez_skale(){
    return this->skala;
}

void obiekt_sceny::Ustaw_orientacje(matrix3d macierz){
    this->orientacja = macierz;
}

void obiekt_sceny::Ustaw_srodek(vector3d vektor){
    this->srodek = vektor;
}

void obiekt_sceny::Ustaw_skale(vector3d _skala){
    this->skala = _skala;
}

