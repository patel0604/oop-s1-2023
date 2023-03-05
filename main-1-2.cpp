#include <iostream>

using namespace std;
extern double array_mean(int array[], int n);

int main(){
    int array[]={};
    int n= sizeof(array) / sizeof(array[0]);
    cout << "Mean of given array is " << array_mean(array,n)<<endl;
    return 0;
}