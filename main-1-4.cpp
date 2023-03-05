#include <iostream>

using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int n= 5;
    int array[]={1,2,3,4,5};
    int secondarray[]={2,4,6,2,8};
    cout << "Sum of given two arrays is " << sum_two_arrays(array, secondarray,n)<<endl;
    return 0;
}