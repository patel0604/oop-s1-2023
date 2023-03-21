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