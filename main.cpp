#include <iostream>
#include <ctime>
#include "math.h"
#include "Algorithm/Sort.h"

using namespace std;

int main( )
{
    int a[]{2,3,4,5,1,9,8};
    InsertSort(a, sizeof(a)/sizeof(a[0]));
    for (auto x:a) {
        cout << x << " ";
    }
}