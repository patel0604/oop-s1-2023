#include <iostream>


using namespace std;

int *readNumbers() {
    int num;
    cout<<"enter the amount of nums: "<<"\n";
    cin>>num;
    int*numbers = new int(num);
    cout<< "enter"<< num<< "numbers: "<<endl;

    for(int i=0; i<num;i++){
        cin>>numbers[i];
    }

    return numbers;
}

void printNumbers(int *numbers,int length){

    for(int i=0; i<length;i++){
        cout<< numbers[i]<< "\n";
    }
}


void hexDigits(int *numbers,int length){
    for (int i=0;i<length;i++){
        int nums = numbers[i];
        char hex_digit;

        switch(nums){
            case 0 ... 9:
                hex_digit = 0,1,2,3,4,5,6,7,8,9;
            case 10:
                hex_digit = 'A';
                break;
            case 11: 
                hex_digit = 'B';
                break;
            case 12: 
                hex_digit = 'C';
                break;
            case 13: 
                hex_digit = 'D';
                break;
            case 14: 
                hex_digit = 'E';
                break;
            case 15: 
                hex_digit = 'F';
                break;
        }
    }
}