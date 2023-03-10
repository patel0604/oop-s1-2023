#include <iostream>
using namespace std;
int array_min(int integers[], int length){
    if(length <=0){
        return -1;
    }
    int min_num = integers[0];

    for(int i=0;i<length;i++){
        if(integers[i]<min_num)
        {
            min_num = integers[i];
        }
    }
    return min_num;
}

int array_max(int integers[], int length){
    if(length <=0){
        return -1;
    }
    int max_num = integers[0];

    for(int i=0;i<length;i++){
        if(integers[i]>max_num)
        {
            max_num = integers[i];
        }
    }
    return max_num;
}

int sum_min_max(int integers[], int length){
    int res_sum = array_min(integers,length) + array_max(integers,length);
    return res_sum;
}