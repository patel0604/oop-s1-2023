#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n = 4;
    PersonList p_list;
    p_list.numPeople = n;
    p_list.people = new Person[n];

    for(int i=0; i<n;i++){
        p_list.people[i].name = "Jane Doe";
        p_list.people[i].age = 1;
    }

    PersonList shallow_copy_list = shallowCopyPersonList(p_list);

    for(int i=0; i<n;i++){

        cout<<shallow_copy_list.people[i].name<<endl;
        cout<<shallow_copy_list.people[i].age<<endl;
    }
}