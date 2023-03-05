#include<iostream>

bool is_fanarray(int array[], int n){
    //return false if n<=0
    if(n<=0){
        return false;
    }

    //loop through the first half of the array.
    for(int i=0; i<n/2; i++){

        //check if the current element is not equal to the correct palindrom position. ie if n =5 and array[0] != array[4], then return false
        if(array[i] != array[n-i-1]){
            return false;
            break;
        }
    }

    //return true
    return true;
}