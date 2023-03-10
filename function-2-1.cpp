#include <iostream>
using namespace std;
void print_binary_str(string decimal_number){
    int number = stoi(decimal_number);
    int rem_array[32];
    int i;
    for(i=0;number>0;i++)
    {
        rem_array[i]=number%2;
        number = number/2;
    
    }
    
    for(i=i-1; i>=0; i--){
        cout<<rem_array[i];
    }

}