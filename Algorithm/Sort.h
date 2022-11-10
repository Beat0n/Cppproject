//
// Created by Hu Jizhe on 2022/11/10.
//

#ifndef PROJECTS_SORT_H
#define PROJECTS_SORT_H

template<typename Record>
void InsertSort(Record Array[], int n) { // O(n^2)
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

template<typename Record>
void ModInsSort(Record Array[], int n, int delta) {
    Record tmp;
    for (int i=delta; i<n; i+=delta) {
        tmp = Array[i];
        int j = i;
        while(tmp<Array[j] && j>=0) {
            Array[j+delta] = Array[j];
            j-=delta;
        }
        Array[j+1] = tmp;
    }
}

template<class Record>
void ShellSort(Record Array[], int n) {
    int i,delta;
    for (delta = n/2; delta>0;delta /= 2) {
        for (i = 0; i<delta; i++) {
            ModInsSort(&Array[i], n-i, delta);
        }
    }
}

#endif //PROJECTS_SORT_H
