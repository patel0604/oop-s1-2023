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
    int num2;
    cout<<"enter the amount of nums: "<<"\n";
    cin>>num2;
    int*numbers2 = new int(num2);
    cout<< "enter"<< num<< "numbers: "<<endl;

    for(int i=0; i<num2;i++){
        cin>>numbers2[i];
    }

    return numbers;
    return numbers2;
}

void printNumbers(int *numbers,int length){

    for(int i=0; i<length;i++){
        cout<< numbers[i]<< "\n";
    }
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    for(int i = 0; i<length; i++ ){
        for(int j=0; j<length; j++){
            if (numbers1[i]==numbers2[j]){
                return true;
            }
            else return false;
        }
    }
}




