#include "func.h"
#include <stdlib.h>

func::func()
{

}

int func::cmpAsc(const void* a, const void* b){
    int ia = *(int*)a;
    int ib = *(int*)b;
    return ia>ib;
}

int func::cmpDec(const void* a, const void* b){
    int ia = *(int*)a;
    int ib = *(int*)b;
    return ia<ib;
}

vector<int> func::sort(vector<int>& vec, sortType flag){
    switch(flag){
        case ASC:
            qsort(&vec[0],vec.size(),sizeof(int),cmpAsc);
            break;
        case DEC:
            qsort(&vec[0],vec.size(),sizeof(int),cmpDec);
            break;
        default:;
    }
    return vec;
}
