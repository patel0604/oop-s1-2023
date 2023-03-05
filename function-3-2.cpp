#include<iostream>
using namespace std;

double median_array(int array[], int n){
    //return 0, if n<=0
    if(n<=0){
        return 0;
    }
    //sort the array from start to end, in increasing order using built in function. 
    sort(array, array + n);

    //declare variable for median.
    int median=0;

    //if array is odd
    if (n % 2 != 0){

        //return median element
        return (double) array[n/2];
    }
    else
    {
        //return the average of the middle two elements
        return (double)(array[(n-1)/2] + array[n/2])/2.0;
        
    }

}