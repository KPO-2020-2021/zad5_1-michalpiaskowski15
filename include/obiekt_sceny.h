#pragma once
#include "vector3d.h"
#include "matrix3d.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>

class obiekt_sceny{
protected:
    std::string czyt_wierzcholki;
    std::string zapis_wierzcholkow;
    vector3d wierzcholki[8];
    vector3d srodek;
    matrix3d orientacja;
    vector3d skala;
public:
    vector3d &operator [] (int index);
    const vector3d &operator [] (int index) const;
    virtual void czyt_wierzcholki_z_pliku(){};
    virtual void szukanie_pozycji() {};
    virtual std::string jaka_przeszkoda(){return std::string("");};
    friend std::ostream &operator <<(std::ostream& x, obiekt_sceny &objekt);
    std::string Czyt_wierzcholki();
    std::string Zapis_wierzcholki();
    vector3d Wez_srodek();
    matrix3d Wez_orientacje();
    vector3d Wez_skale();
    void Ustaw_orientacje(matrix3d macierz);
    void Ustaw_srodek(vector3d vektor);
    void Ustaw_skale(vector3d _skala);


};

