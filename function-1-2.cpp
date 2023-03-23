#include "Person.h"
#include<iostream>
#include <string>
using namespace std;

PersonList createPersonList(int n){
    PersonList p_list;
    p_list.numPeople = n;
    p_list.people = new Person[n];

    for(int i=0; i<n;i++){
        p_list.people[i].name = "John Doe";
        p_list.people[i].age = 1;
    }
    return p_list;
}