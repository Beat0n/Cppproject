//
// Created by Hu Jizhe on 2022/10/8.
//

#include "Vector.h"

Vector::Vector(int s):
    elem{new double[s]}, sz{s}
    {}

double &Vector::operator[](int i) {
    if (i<0 || size()<=i) {
        throw out_of_range{"Vector::operator[]"};
    }
    return elem[i];
}

int Vector::size() {
    return sz;
}
