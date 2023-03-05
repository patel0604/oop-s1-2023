#include <iostream>

using namespace std;
extern int count_evens(int number);

int main(){
    int number= 6;
    cout << "The amount of even numbers from 1 to " << number<< " is " << count_evens(number)<<endl;
    return 0;
}