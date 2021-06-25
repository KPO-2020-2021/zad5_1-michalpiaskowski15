#pragma once

#include <iostream>
template <int wymiar>
class Vector {

private:

    double size[wymiar];     //Tablica wektora
    friend class Rectangle;
public:

    Vector();        /*konstruktor klasy*/

    Vector(double [wymiar]);

    template<int wymiar1>
    friend Vector<wymiar1> operator+(Vector<wymiar1> &Vec1, Vector<wymiar1> &Vec2);

    template<int wymiar1>
    friend Vector<wymiar1> operator-(Vector<wymiar1> &Vec1, Vector<wymiar1> &Vec2);

    template<int wymiar1>
    friend Vector<wymiar1> operator/(Vector<wymiar1> &Vec, const double &Num);

    template<int wymiar1>
    friend Vector<wymiar1> operator*(Vector<wymiar1> &Vec, const double &Num);

    const double &operator [] (int index) const;

    double &operator [] (int index);

    friend class vector3d;

};

template <int wymiar>
std::ostream &operator << (std::ostream &out, Vector <wymiar> const &tmp);
template <int wymiar>
std::istream &operator >> (std::istream &in, Vector <wymiar> &tmp);


/**
 * @brief Construct a new Vector<wymiar>:: Vector object (zeroes)
 * 
 * @tparam wymiar 
 */
template <int wymiar>
Vector<wymiar>::Vector() {
    for (int i = 0; i < wymiar; i++) {
        size[i] = 0;
    }
}

/**
 * @brief Construct a new Vector<wymiar>:: Vector object
 * 
 * @tparam wymiar 
 * @param tmp 
 */
template <int wymiar>
Vector<wymiar>::Vector(double tmp[wymiar]) {
    for (int i = 0; i < wymiar; i++) {
        size[i] = tmp[i];
    }
}

/**
 * @brief Addition of two new vectors.
 * 
 * @tparam wymiar 
 * @param v 
 * @return Vector<wymiar> (Sum)
 */

template<int dimension>
Vector<dimension> operator+(Vector<dimension> &Vec1, Vector<dimension> &Vec2) {
    Vector<dimension> result;
    result[0] = (Vec1[0] + Vec2[0]);
    if (dimension > 1) result[1] = (Vec1[1] + Vec2[1]);
    if (dimension > 2) result[2] = (Vec1[2] + Vec2[2]);
    return result;
}

template<int dimension>
Vector<dimension> operator-(Vector<dimension> &Vec1, Vector<dimension> &Vec2) {
    Vector<dimension> result;
    result[0] = (Vec1[0] - Vec2[0]);
    if (dimension > 1) result[1] = (Vec1[1] - Vec2[1]);
    if (dimension > 2) result[2] = (Vec1[2] - Vec2[2]);
    return result;
}

template<int dimension>
Vector<dimension> operator*(Vector<dimension> &Vec, const double &Num) {
    Vector<dimension> result;
    result[0] = (Vec[0] * Num);
    if (dimension > 1) result[1] = (Vec[1] * Num);
    if (dimension > 2) result[2] = (Vec[2] * Num);
    return result;
}

template<int dimension>
Vector<dimension> operator/(Vector<dimension> &Vec, const double &Num) {
    if (Num == 0) {
        throw std::invalid_argument("division by zero");
    }
    Vector<dimension> result;
    result[0] = (Vec[0] / Num);
    if (dimension > 1) result[1] = (Vec[1] / Num);
    if (dimension > 2) result[2] = (Vec[2] / Num);
    return result;
}

/**
 * @brief Vector functor.
 * 
 * @tparam wymiar 
 * @param index 
 * @return const double& 
 */
template <int wymiar>
const double &Vector<wymiar>::operator [] (int index) const {
    if (index < 0 || index >= wymiar) {
        std::cerr << "Error: Wektor jest poza zasiegiem!" << std::endl;
    }
    return size[index];
}

/**
 * @brief  Vector functor.
 * 
 * @tparam wymiar 
 * @param index 
 * @return double& 
 */
template <int wymiar>
double &Vector<wymiar>::operator[](int index) {
    return const_cast<double &>(const_cast<const Vector *>(this)->operator[](index));
}


/**
 * @brief << operator overload (for Vector)
 * 
 * @tparam wymiar 
 * @param out 
 * @param tmp 
 * @return std::ostream& 
 */
template <int wymiar>
std::ostream &operator << (std::ostream &out, Vector <wymiar> const &tmp) {
    for (int i = 0; i < wymiar; i++) {
        out << tmp[i];
        if(i == 0 || i == 1){
            out << " ";
        }
    }
    return out;
}


/**
 * @brief >> operator overload (for Vector)
 * 
 * @tparam wymiar 
 * @param in 
 * @param tmp 
 * @return std::istream& 
 */
template <int wymiar>
std::istream &operator >> (std::istream &in, Vector <wymiar> &tmp) {
    for (int i = 0; i < wymiar; i++) {
        in >> tmp[i];
    }
    return in;
}
