#include "cuboid.hh"

Cuboid::Cuboid(){

}
/**
 * @brief Construct a new Cuboid:: Cuboid object
 * 
 * @param pozycja 
 * @param zapis_cuboid 
 * @param orientacja 
 */
Cuboid::Cuboid(vector3d pozycja, std::string zapis_cuboid,  matrix3d orientacja){
    this->orientacja = orientacja;
    this->czyt_wierzcholki = "../datasets/cuboid.dat";
    this->zapis_wierzcholkow = zapis_cuboid;
    this->srodek = pozycja;
}
/**
 * @brief Czytanie wierzchholkow z pliku
 * 
 */
void Cuboid::czyt_wierzcholki_z_pliku(){
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
 */
void Cuboid::szukanie_pozycji(){
    czyt_wierzcholki_z_pliku();
    for (int i = 0; i < 8; ++i){
        this->wierzcholki[i] = this->orientacja * this->wierzcholki[i];
    }
    for (int i = 0; i < 8; ++i){
        this->wierzcholki[i] = this->srodek + this->wierzcholki[i];
    }
}
/**
 * @brief Przesuniecie o wektor
 * 
 * @param translacja 
 */
void Cuboid::przesuniecie_o_wektor(vector3d translacja){
    for(int i = 0; i < 8; i++) {
        this->wierzcholki[i] = this->wierzcholki[i] + translacja;
    }
}
/**
 * @brief Rotacja
 * 
 * @param macierz_obrotu 
 */
void Cuboid::rotacja(matrix3d macierz_obrotu){
    for(int i = 0; i < 8; i++)
        this->wierzcholki[i] = macierz_obrotu * this->wierzcholki[i];
}


std::ostream & operator <<(std::ostream & x, Cuboid &objekt){
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

const vector3d & Cuboid::operator[](int index) const{
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

vector3d & Cuboid::operator[](int indeks){

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
        default:
            std::cout <<" blad";
            throw std::exception();
    }
}
