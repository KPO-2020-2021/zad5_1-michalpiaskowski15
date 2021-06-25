#pragma once
#include "matrix.hh"
class matrix3d: public Matrix<3>{
public:
    matrix3d();
    matrix3d(double kat, char os);
    matrix3d& operator=(const matrix3d macierz);
    matrix3d& operator=(const Matrix<3> macierz);
};

