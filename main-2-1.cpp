#include<iostream>
using namespace std;
extern void print_binary_str(string decimal_number);

int main(){
    string decimal_number = "9";
    print_binary_str(decimal_number);
    return 0;
}