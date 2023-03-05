#include <iostream>

int count_evens(int number){
    //declare counter variable
    int counter = 0;

    //iterate through the numbers from 1 to the number inputted. 
    for (int i=1; i<number+1; i++){
        
        //if the current number in iteration has a remainder of 0 when divided by two, it is even.
        if(i%2==0){
            //increment the counter
            counter++;
        }
    }

    //return counter
    return counter;
}