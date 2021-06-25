#pragma once
#include "vector.hh"

class vector3d: public Vector<3>{
private:
    static int ile_wektorow_wogole;
    static int ile_wektorow_aktualnie;
public:
    vector3d();
    vector3d(double x, double y, double z);
    vector3d(const vector3d &wektor);
    ~vector3d();
    vector3d& operator=(const vector3d vektor);
    vector3d& operator=(const Vector<3> vektor);
    static int zwroc_wektory_wogole();
    static int zwroc_wektory_aktualnie();
    double dlugosc();

};
