#include "vector3d.h"
#include <cmath>

int vector3d::ile_wektorow_aktualnie = 0;
int vector3d::ile_wektorow_wogole = 0;

vector3d::vector3d() {
    ile_wektorow_wogole ++;
    ile_wektorow_aktualnie ++;
    this->size[0] = 0;
    this->size[1] = 0;
    this->size[2] = 0;
}
vector3d::vector3d(double x, double y, double z) {
    ile_wektorow_wogole ++;
    ile_wektorow_aktualnie ++;
    this->size[0] = x;
    this->size[1] = y;
    this->size[2] = z;
}

vector3d::vector3d(const vector3d &wektor){
    ile_wektorow_wogole ++;
    ile_wektorow_aktualnie ++;
    this->size[0] = wektor.size[0];
    this->size[1] = wektor.size[1];
    this->size[2] = wektor.size[2];
}

vector3d::~vector3d() {
    ile_wektorow_aktualnie --;
}

vector3d& vector3d::operator=(const vector3d vektor){
    this->size[0] = vektor[0];
    this->size[1] = vektor[1];
    this->size[2] = vektor[2];
    return *this;
}
vector3d& vector3d::operator=(const Vector<3> vektor){
    this->size[0] = vektor[0];
    this->size[1] = vektor[1];
    this->size[2] = vektor[2];
    return *this;
}
/**
 * @brief Zwracanie wszystkich wektorow
 * 
 * @return int 
 */
int vector3d::zwroc_wektory_wogole(){
    return ile_wektorow_wogole;
}
/**
 * @brief Zwracanie aktualnych wektorow
 * 
 * @return int 
 */
int vector3d::zwroc_wektory_aktualnie(){
    return ile_wektorow_aktualnie;
}

double vector3d::dlugosc(){
    double dlg = sqrt(pow(size[0],2) + pow(size[1],2)+pow(size[2],2));
    return dlg;
}