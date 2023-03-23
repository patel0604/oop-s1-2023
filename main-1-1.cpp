#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main(){
    int n = 5;
    Person* persons = createPersonArray(n);
    for(int i=0; i<n;i++){

        cout<<persons[i].name<<endl;
        cout<<persons[i].age<<endl;
    }

    delete [] persons;
    return 0;
}