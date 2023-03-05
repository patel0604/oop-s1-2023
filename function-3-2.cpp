#include<iostream>

//this library allows for the sort function to be used. no manual sorting required
#include<algorithm>
using namespace std;

double median_array(int array[], int n){
    //return 0, if n<=0 or if the array has even number of elements
    if(n%2==0||n<=0){
        return 0;
    }
    //sort the array from start to end, in increasing order using built in function. 
    sort(array, array + n);


    //if array is odd
    if (n % 2 != 0){

        //return median element
        return (double) array[n/2];
    }


}