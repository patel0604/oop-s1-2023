#include<iostream>
using namespace std;
void two_five_nine(int array[], int n){

    //if the size of the array is less than 1, return 0.
    if(n<1){
        int counter_2 = 0;
        int counter_5 = 0;
        int counter_9 = 0;
    }
    //declare counter variables for the numbers 2 5 9.
    int counter_2 = 0;
    int counter_5 = 0;
    int counter_9 = 0;

    //loop through the array 
    for(int i=0; i<n; i++){

        //create a switch statement with the expression being the current iteration of the array
        switch (array[i])
        {
        //if array[i] = 2, increment counter_2 variable
        case 2:
            counter_2++;
            break;
        
        //if array[i] = 5, increment counter_5 variable
        case 5:
            counter_5++;
            break;

        //if array[i] = 9, increment counter_9 variable
        case 9:
            counter_9++;
            break;
        }
    }

    //print the results of the array in desired format 
    cout << "2:" << counter_2 << ";5:" << counter_5 << ";9:" << counter_9 << endl;
}