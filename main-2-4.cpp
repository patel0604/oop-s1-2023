#include <iostream>

using namespace std;
extern bool is_ascending(int array[], int n);

int main(){
    int n= 6;
    int array[]= {1,2,3,4,5,6};
    cout<< boolalpha<<is_ascending(array, n)<<endl;
    return 0;
}