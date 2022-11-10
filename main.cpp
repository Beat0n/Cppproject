#include <iostream>
#include <ctime>
#include "math.h"
#include "Algorithm/Sort.h"

using namespace std;

int main( )
{
    double a[]{2.9,3,4.3,5,1,9,8};
    ModInsSort(a, sizeof(a)/sizeof(a[0]),1);
    for (auto x:a) {
        cout << x << " ";
    }
}