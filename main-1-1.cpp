#include<iostream>
using namespace std;
extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {1,2,3,4,
                       1,2,3,4,
                       1,3,4,3,
                       1,3,5,5};
    cout << "Sum of diagonal in given array is " << sum_diagonal(array)<<endl;
}  