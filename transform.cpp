#include <iostream>
using namespace std;
void ten_to_two(int number){
    // max unsigned int c++ can take in is 2 147 483 647 which needs 32 digits as binary.
    int rem_array[32];
    int i;
    for(i=0;number>0;i++)
    {
        rem_array[i]=number%2;
        number = number/2;
        
    }

    //print this message outside of the for loop to make sure it doesnt keep printing the message for each binary digit. 
    cout<<"the binary number of your given decimal is: ";

    //need to print the array in reverse. 
    for(i=i-1; i>=0; i--){
        cout<<rem_array[i];
    }

}

int main(){
    int number;
    cout<<"Enter a base 10(decimal) number to convert to base 2(binary): ";
    cin>>number;
    ten_to_two(number);
    return 0;
}