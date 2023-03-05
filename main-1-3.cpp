#include <iostream>

using namespace std;
extern int num_count(int array[], int n, int number);

int main(){
    int array[]={1,3,3,3,5};
    int n= sizeof(array) / sizeof(array[0]);
    int number = 3;
    cout << "Integer " << number<< " occurs in the array "<<num_count(array,n,number)<<" times"<<endl;
    return 0;
}