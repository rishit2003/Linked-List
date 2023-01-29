/*
Rishit Mittal
Student ID: 40195805
Assignment-5
*/

#include "Node.h"

Node::Node() : next(nullptr)
{
    element = 0;
}

Node::Node(int element) : next(nullptr)
{
    this->element = element;
}

Node::~Node()
{

}

void Node::set_next(Node *node)
{
    next = node;
}

Node* Node::get_next()
{
    return next;
}

int Node::get_element()
{
    return element;
}