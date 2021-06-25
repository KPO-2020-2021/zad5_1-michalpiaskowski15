#pragma once


#include "vector.hh"
#include <iostream>
#include <cstdlib>
#include <math.h>
template <int wymiar>
class Matrix {

private:
    double value[wymiar][wymiar];               // Wartosci macierzy

public:
    Matrix(double [wymiar][wymiar]);            // Konstruktor klasy

    Matrix();                               // Konstruktor klasy

    
    Vector<wymiar> operator * (Vector<wymiar> tmp);           // Operator mnożenia przez wektor

    template<int wymiar1>
    friend Matrix<wymiar1> operator * (Matrix<wymiar1> &tmp, Matrix<wymiar1> &tmp2);

    Matrix<wymiar> operator + (Matrix<wymiar> tmp);           // Operator dodawania

    double  &operator () (unsigned int row, unsigned int column);
    
    const double &operator () (unsigned int row, unsigned int column) const;

    friend class matrix3d;
    
};





template <int wymiar>
std::istream &operator>>(std::istream &in, Matrix<wymiar> &mat);
template <int wymiar>
std::ostream &operator<<(std::ostream &out, Matrix<wymiar> const &mat);

/**
 * @brief Construct a new Matrix<wymiar>:: Matrix object (zeroes)
 * 
 * @tparam wymiar 
 */
 template <int wymiar>
Matrix<wymiar>::Matrix() {
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            if (i == j){
                value[i][j] = 1;
            }else{
                value[i][j] = 0;
            }

        }
    }
}

/**
 * @brief Construct a new Matrix<wymiar>:: Matrix object
 * 
 * @tparam wymiar 
 * @param tmp 
 */
 template <int wymiar>
Matrix<wymiar>::Matrix(double tmp[wymiar][wymiar]) {
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            value[i][j] = tmp[i][j];
        }
    }
}

/**
 * @brief Matrix and vector multiplication
 * 
 * @tparam wymiar 
 * @param tmp 
 * @return Vector<wymiar> 
 */
template <int wymiar>
Vector<wymiar> Matrix<wymiar>::operator * (Vector <wymiar> tmp) {
    Vector<wymiar> result;
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            result[i] += value[i][j] * tmp[j];
        }
    }
    return result;
}

template <int wymiar>
Matrix<wymiar> operator * ( Matrix <wymiar> &tmp, Matrix <wymiar> &tmp2) {
    Matrix<wymiar> result;
    for(int i = 0; i < wymiar; i++){
        for(int j = 0; j < wymiar; j++){
            result(i, j) = 0;
            for(int k = 0; k < wymiar; k++){
                result(i, j) += tmp(i, k) * tmp2(k, j);
            }
        }
    }
    return result;
}
/**
 * @brief Matrix functor
 * 
 * @tparam wymiar 
 * @param row 
 * @param column 
 * @return double& 
 */
 template <int wymiar>
double &Matrix<wymiar>::operator()(unsigned int row, unsigned int column) {

    if (row >= wymiar) {
        std::cout << "Error: Macierz jest poza zasiegiem"; 
        exit(0); // lepiej byłoby rzucić wyjątkiem stdexcept
    }

    if (column >= wymiar) {
        std::cout << "Error: Macierz jest poza zasiegiem";
        exit(0); // lepiej byłoby rzucić wyjątkiem stdexcept
    }

    return value[row][column];
}




/**
 * @brief Matrix functor
 * 
 * @tparam wymiar 
 * @param row 
 * @param column 
 * @return const double& 
 */
 template <int wymiar>
const double &Matrix<wymiar>::operator () (unsigned int row, unsigned int column) const {            

    if (row >= wymiar) {
        std::cout << "Error: Macierz jest poza zasiegiem";
        exit(0); // lepiej byłoby rzucić wyjątkiem stdexcept
    }

    if (column >= wymiar) {
        std::cout << "Error: Macierz jest poza zasiegiem";
        exit(0); // lepiej byłoby rzucić wyjątkiem stdexcept
    }

    return value[row][column];
}



/**
 * @brief Matrix addition overload
 * 
 * @tparam wymiar 
 * @param tmp 
 * @return Matrix<wymiar> 
 */
 template <int wymiar>
Matrix<wymiar> Matrix<wymiar>::operator + (Matrix<wymiar> tmp) {
    Matrix result;
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            result(i, j) = this->value[i][j] + tmp(i, j);
        }
    }
    return result;
}

/**
 * @brief >> operator overload (for Matrix)
 * 
 * @tparam wymiar 
 * @param in 
 * @param mat 
 * @return std::istream& 
 */
 template <int wymiar>
std::istream &operator>>(std::istream &in, Matrix<wymiar> &mat) {
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            in >> mat(i, j);
        }
    }
    return in;
}


/**
 * @brief << operator overload (for Matrix)
 * 
 * @tparam wymiar 
 * @param out 
 * @param mat 
 * @return std::ostream& 
 */
 template <int wymiar>
std::ostream &operator<<(std::ostream &out, const Matrix<wymiar> &mat) {
    for (int i = 0; i < wymiar; i++) {
        for (int j = 0; j < wymiar; j++) {
            out << "| " << mat(i, j) << " | "; //warto ustalic szerokosc wyswietlania dokladnosci liczb
        }
        std::cout << std::endl;
    }
    return out;
}


