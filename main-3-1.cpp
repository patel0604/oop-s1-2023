#include <iostream>
#include <array>

using namespace std;
extern bool is_fanarray(int array[], int n);

int main(){
    int array[]= {3,2,1,2,3};
    int n = sizeof(array)/sizeof(array[0]);
    cout<< boolalpha<<is_fanarray(array, n)<<endl;
    return 0;
}