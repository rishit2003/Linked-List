/*
Rishit Mittal
Student ID: 40195805
Assignment-5
*/

class Node {

private:
    int element;
    Node *next;

public:
    Node();
    Node(int element);
    ~Node();
    void set_next(Node *);
    Node* get_next();
    int get_element();
};
