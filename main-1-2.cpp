#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n = 4;
    PersonList p_list = createPersonList(n);
    for (int i = 0; i < p_list.numPeople; i++) {
        cout<<p_list.people[i].name<<endl;
        cout<<p_list.people[i].age<<endl;
    }
    delete[] p_list.people;
    return 0;
}
