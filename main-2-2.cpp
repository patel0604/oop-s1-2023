#include<iostream>
using namespace std;
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1,0,1,0,1};
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);
    cout<< "the decimal value of the binary input is: "<<binary_to_int(binary_digits, number_of_digits);
}