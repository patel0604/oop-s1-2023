#include <iostream>
#include <string>
using namespace std;

string binary_addition(string num1, string num2) {
    
    string res = "";
    
    int carry = 0;

    // declare i and j
    int i = num1.size() - 1, j = num2.size() - 1;

    // if the binary number still has digits or has a carry 
    while (i >= 0 || j >= 0 || carry == 1) {
        
        int sum = carry;
        // If there are more digits in a, add the current digit to the sum and decrement i
        if (i >= 0) {
            sum += num1[i] - '0';
            i--;
        }
        // If there are more digits in b, add the current digit to the sum and decrement j
        if (j >= 0) {
            sum += num2[j] - '0';
            j--;
        }
        
        carry = sum / 2;
    }

    // Return the result string containing the binary sum
    return res;
}

int main() {
    
    string num1;
    string num2;

    cout<<"Enter the first binary number you wish to add: ";
    cin>>num1;
    cout<<"Enter the second binary number you wish to add: ";
    cin>>num2;
    
    //call the binary sum function
    cout << "Binary sum of " << num1 << " and " << num2 << " is " << binary_addition(num1, num2) << endl;
    return 0;
}