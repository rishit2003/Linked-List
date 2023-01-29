/*
Rishit Mittal
Student ID: 40195805
Assignment-5
*/

#include <iostream>
#include "linkedList.h"

int main() {

    linkedList l1;

    cout<<"------------------Adding Elements------------------"<<endl;

    l1.add(2);
    l1.add(10);
    l1.add(5);

    cout<<l1<<endl;

    l1.add(6);
    l1.add(9);

    cout<<l1<<endl;

    cout<<"------------------Adding 50 to index 3------------------"<<endl;

    l1.add(50,3);
    cout<<l1<<endl;

    cout<<"Value at index 2: "<<l1.value(2)<<endl;

    cout<<"------------------Trying to add element at negative index------------------"<<endl;

    l1.add(4, -2);
    cout<<l1<<endl;

    cout<<"------------------Adding element 8 at index 0------------------"<<endl;

    l1.add(8,0);
    cout<<l1<<endl;

    cout<<"------------------Removing elements------------------"<<endl;

    l1.remove(50);
    cout<<l1<<endl;

    l1.remove(9);
    cout<<l1<<endl;

    l1.remove(8);
    cout<<l1<<endl;

    cout<<"Value at index 2: "<<l1.value(2)<<endl;

    return 0;
}
