#include<iostream>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    int ans = 0;

    for(int i=0; i<number_of_digits; i++){
        ans = ans << 1 | binary_digits[i];

    }
    return ans;
}