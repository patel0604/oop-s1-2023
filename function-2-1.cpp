#include<iostream>

int min_element(int array[], int n){
    
    //if the size of the array is less than 1, return 2.
    if(n<1){
        return 0;
    }
    //assume the smallest sum in the array is a 1st position. Can be updated later if wrong.
    int min_num = array[1];
    
    //loop through the array 
    for(int i=0;i<n;i++){

        //if there is an element in the array that is less than 'min_num' then update min_num to current value.
        if (array[i]< min_num){
            min_num = array[i];
        }
    }

    //return min_num
    return min_num;
}