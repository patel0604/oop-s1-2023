#include <iostream>

using namespace std;
extern int array_sum(int array[], int n);

int main(){
    int array[5]={1,2,3,4,5};
    int n= sizeof(array) / sizeof(array[0]);
    cout << "Sum of given array is " << array_sum(array,5)<<endl;
    return 0;
}