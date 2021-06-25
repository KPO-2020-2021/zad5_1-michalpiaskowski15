
#include "matrix3d.h"
#include "math.h"

matrix3d::matrix3d(){
    this->value[0][0] = 1;
    this->value[0][1] = 0;
    this->value[0][2] = 0;
    this->value[1][0] = 0;
    this->value[1][1] = 1;
    this->value[1][2] = 0;
    this->value[2][0] = 0;
    this->value[2][1] = 0;
    this->value[2][2] = 1;

}

matrix3d::matrix3d(double kat, char os) {
    double kat_radiany = (kat * M_PI) / 180;
    switch (os) {
        case 'x':
            value[0][0] = 1;
            value[0][1] = 0;
            value[0][2] = 0;
            value[1][0] = 0;
            value[1][1] = cos(kat_radiany);
            value[1][2] = -sin(kat_radiany);
            value[2][0] = 0;
            value[2][1] = sin(kat_radiany);
            value[2][2] = cos(kat_radiany);
            break;

        case 'y':
            value[0][0] = cos(kat_radiany);
            value[0][1] = 0;
            value[0][2] = sin(kat_radiany);
            value[1][0] = 0;
            value[1][1] = 1;
            value[1][2] = 0;
            value[2][0] = -sin(kat_radiany);
            value[2][1] = 0;
            value[2][2] = cos(kat_radiany);
            break;

        case 'z':
            value[0][0] = cos(kat_radiany);
            value[0][1] = -sin(kat_radiany);
            value[0][2] = 0;
            value[1][0] = sin(kat_radiany);
            value[1][1] = cos(kat_radiany);
            value[1][2] = 0;
            value[2][0] = 0;
            value[2][1] = 0;
            value[2][2] = 1;
            break;

        default:
            std::cout << "Niepoprawna os" << std::endl;
            break;
    }
}

matrix3d& matrix3d::operator=(const matrix3d macierz){
    for(int i = 0; i <3; ++i){
        for(int j = 0; j <3; ++j){
            this->value[i][j] = macierz.value[i][j];
        }
    }
    return *this;
}

matrix3d& matrix3d::operator=(const Matrix<3> macierz){
    for(int i = 0; i <3; ++i){
        for(int j = 0; j <3; ++j){
            this->value[i][j] = macierz.value[i][j];
        }
    }
    return *this;
}