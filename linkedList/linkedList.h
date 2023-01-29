/*
Rishit Mittal
Student ID: 40195805
Assignment-5
*/

#include "Node.h"
#include <fstream>
using namespace std;

class linkedList {

friend ostream& operator<<(ostream &, const linkedList &);

private:
    Node *head;
    Node *tail;
    Node *link;

public:
    linkedList();
    ~linkedList();
    void add(int element);
    void add(int element, int position);
    void remove(int element);
    int value(int position);
};
