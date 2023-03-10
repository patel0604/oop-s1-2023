#include<iostream>
using namespace std;
extern int is_identity(int array[10][10]);

int main(){
    int array[10][10] = {0};
    cout << is_identity(array)<<endl;
}  