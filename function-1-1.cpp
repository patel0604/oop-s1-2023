#include <iostream>
using namespace std;

int array_sum(int array[], int n){
    
    //if size of array is less than 1, return 0
    if(n<1){
        return 0;
    }
    
    //initialize a variable for sum starting at 0.
    int sum = 0;

    //loop through the array
    for(int i=0;i<n;i++){
        //keep adding the value of each element to variable sum. ie increment variable sum by value of the element
        sum += array[i];
    }

    //return sum
    return sum;
};
