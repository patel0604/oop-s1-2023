#include <iostream>
using namespace std;
void print_pass_fail(char grade){
    
    //create switch statement that checks grade
    switch (grade)
    {
    
    // if grade is A,B,C then output Pass
    case 'A':
        cout<<"Pass\n"<<endl;
        break;
    case 'B':
        cout<<"Pass\n"<<endl;
        break;
    case 'C':
        cout<<"Pass\n"<<endl;
        break;
    //if grade is D,E then output Fail.
    case 'D':
        cout<<"Fail\n"<<endl;
        break;
    case 'E':
        cout<<"Pass\n"<<endl;
        break;
    //if the input was a different letter then output nothing.
    default:
        cout<<"nothing"<<endl;
        break;
    }
}