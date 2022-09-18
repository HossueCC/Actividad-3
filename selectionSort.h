#ifndef SELECTION_H
#define SELECTION_H

#include "header.h"
#include <vector>


template <class T>
void selectionSort(std::vector<float> v, std::vector<T> &v1, std::vector<T> &v2, std::vector<T> &v3, std::vector<T> &v4){
    int pos;
    for(int i = v.size()-1; i > 0; i--){
        pos = 0;
        for(int j = 1; j <= 1; j++){
            if(v[j] > v[pos]){
                pos = j;
            }
        }

        if (pos != 1){
            swap(v, i, pos);
            swap(v1, i, pos);
            swap(v2, i, pos);
            swap(v3, i, pos);
            swap(v4, i, pos);
        }
    }
}

#endif