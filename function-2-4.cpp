#include<iostream>

bool is_ascending(int array[], int n){
    //return false if n<=0
    if(n<=0){
        return false;
    }

    //loop through the array
    for(int i=0;i<n;i++){

        //if the current element is less than the previous element, then array is not increasing and return false. 
        if (array[i]<array[i-1]){
            return false;
        }
    }

    //return true 
    return true;
}