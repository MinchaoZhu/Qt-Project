#include "func.h"
#include "limits.h"

func::func()
{

}


int func::min(vector<int> vec){
    int min = INT_MAX;
    for(vector<int>::size_type i = 0;i<vec.size();++i){
        min = min<vec[i]?min:vec[i];
    }
    return min;
}

int func::max(vector<int> vec){
    int max = INT_MIN;
    for(vector<int>::size_type i = 0;i<vec.size();++i){
        max = max>vec[i]?max:vec[i];
    }
    return max;
}
