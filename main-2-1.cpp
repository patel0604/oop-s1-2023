#include <iostream>

using namespace std;
extern int min_element(int array[], int n);

int main(){
    int n= 6;
    int array[]= {4,5,2,5,1,7};
    cout << "Smallest number in the array is " << min_element(array, n)<<endl;
    return 0;
}