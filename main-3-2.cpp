#include <iostream>
#include <array>
using namespace std;
extern double median_array(int array[], int n);

int main(){
    int array[]= {1,2,1,4,1,3};
    int n= sizeof(array)/sizeof(array[0]);
    cout<< median_array(array, n)<<endl;
    return 0;
}