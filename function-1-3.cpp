#include<iostream>

int num_count(int array[], int n, int number)
{
    //declare a counter variable that starts at 0 and increments later on 
    int counter = 0;

    //if array size is less than 1, then counter = 0
    if(n < 1){
        counter = 0;
    }

    //loop through the array 
    for(int i=0;i<n;i++){

        //check if the current iteration of array is = to target number
        if(array[i]==number)

        //if above condition is met, increment counter.
        counter++;
    }

    //return counter
    return counter;
    
}