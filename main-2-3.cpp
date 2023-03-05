#include <iostream>
#include <array>
using namespace std;
extern void two_five_nine(int array[], int n);

int main(){
    int array[]= {0};
    int n= sizeof(array) / sizeof(array[0]);
    two_five_nine(array, n);
    return 0;
}