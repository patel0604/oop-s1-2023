#include <iostream>

using namespace std;
extern double sum_even(double array[], int n);

int main(){
    double array[]={1,2,3,4,5};
    int n= sizeof(array) / sizeof(array[0]);
    cout << "Sum of given array is " << sum_even(array, n)<<endl;
    return 0;
}