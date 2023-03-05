#include <iostream>

double sum_even(double array[], int n){
    
    //return 0 if n<=0
    if(n<=0){
        return 0;
    }
    //declare a variable for sum to 0
    int sum=0;

    //loop through array 
    for(int i=0; i<n; i++){
        //only add the value of the element to sum if it is in an even position
        sum+=array[i%2==0];
    
    }

    //return sum plus the value of first element as 0 is an even number. 
    return sum+array[0];
}