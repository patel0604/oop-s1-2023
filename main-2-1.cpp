#include <iostream>

extern void hexDigits(int *numbers,int length);
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
int main(){
    int *numbers = readNumbers();
    hexDigits(numbers, 15);
    printNumbers(numbers, 15);
    delete[]numbers;
    return 0;
}
