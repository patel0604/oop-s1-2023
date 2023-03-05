#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    //declare variables for sum of 1st and 2nd array.
    int sum1=0;
    int sum2=0;

    //if the size of the array is less than 1, return 2.
    if(n<1){
        return 0;
    }

    //loop through both arrays at once as they have the same size
    for(int i=0; i<n;i++){
        //increment the sum variable for 1st array 
        sum1+=array[i];
        
        //increment the sum variable for 2nd array 
        sum2+=secondarray[i];
    }

    //add sum for both arrays to find final sum 
    int final_sum=sum1+sum2;

    //return final sum
    return final_sum;
}