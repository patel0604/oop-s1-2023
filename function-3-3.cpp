#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
    //if n<1 return 0
    if (n < 1)
    {  
        return 0;
    }

    //declare variable for weighted sum. 
    double weighted_sum = 0;

    //use nested loop to find the frequency of each element to calcumlate the weighted sum. 
    for (int i = 0; i < n; i++) {
        int counter = 1;   
        for (int j = i + 1; j < n; j++) {

            //if the two elements in the array are same. 
            if (array[j] == array[i]) {   
                //increase counter
                counter++; 


                //swap element with last element in array 
                array[j] = array[n-1];   
                
                //decrement n and j.
                n--; 
                j--;   
            }
        }

        //add current element times its frequency to weighted sum
        weighted_sum += array[i] * counter;   
    }

    //the weighted average will be the weighted sum/n.
    return weighted_sum / n;   
}