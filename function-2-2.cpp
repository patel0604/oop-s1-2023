#include<iostream>

int max_element(int array[], int n){
    
    //if the size of the array is less than 1, return 2.
    if(n<1){
        return 0;
    }
    //assume that the element at position 1 is the max number 
    int max_num = array[1];
    
    //loop throught the array
    for(int i=0;i<n;i++){

        //if there is an element larger than the previous largest num, update max_num.
        if (array[i] > max_num){
            max_num = array[i];
        }
    }

    //return max num
    return max_num;
}