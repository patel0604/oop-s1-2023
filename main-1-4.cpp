#include<iostream>

using namespace std;
extern void print_scaled(int array[3][3],int scale);

int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    int scale = 3;
    print_scaled(array, scale);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  