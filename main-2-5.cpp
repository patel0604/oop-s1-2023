#include <iostream>

using namespace std;
extern bool is_descending(int array[], int n);

int main(){
    int n= 6;
    int array[]= {1,2,3,4,5,6};
    cout<< boolalpha<<is_descending(array, n)<<endl;
    return 0;
}