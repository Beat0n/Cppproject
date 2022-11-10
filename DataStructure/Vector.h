//
// Created by Hu Jizhe on 2022/10/8.
//

#ifndef PROJECTS_VECTOR_H
#define PROJECTS_VECTOR_H


class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem;
    int sz;
};


#endif //PROJECTS_VECTOR_H
