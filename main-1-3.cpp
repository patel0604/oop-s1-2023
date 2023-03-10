#include<iostream>

using namespace std;
extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {0};
    count_digits(array);
    return 0;
}  