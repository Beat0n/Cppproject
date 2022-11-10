//
// Created by Hu Jizhe on 2022/11/10.
//

#ifndef PROJECTS_SORT_H
#define PROJECTS_SORT_H

template<typename Record>
void InsertSort(Record Array[], int n) {
    Record tmp;
    for (int i=1; i<n; i++) {
        tmp = Array[i];
        int j = i-1;
        while(tmp<Array[j] && j>=0) {
            Array[j+1] = Array[j];
            j--;
        }
        Array[j+1] = tmp;
    }
}

#endif //PROJECTS_SORT_H
