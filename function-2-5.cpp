#include<iostream>

bool is_descending(int array[], int n){
    //return false if n<=0
    if(n<=0){
        return false;
    }
    
    //loop through the array
    for(int i=0;i<n;i++){
        //if current element is less than the next element, then the array is not descending. so return false  
        if (array[i]<array[i+1]){
            return false;
        }
    }

    //return true.
    return true;
}