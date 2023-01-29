/*
Rishit Mittal
Student ID: 40195805
Assignment-5
*/

#include "linkedList.h"
#include <iostream>

linkedList::linkedList() : head(nullptr), tail(nullptr), link(nullptr)
{

}

linkedList::~linkedList()
{

}

ostream &operator<<(ostream &output, const linkedList &LinkedList)
{
    Node *temp = new Node();
    temp = LinkedList.head;
    while(temp != nullptr)
    {
        output<<temp->get_element()<<" ";
        temp = temp->get_next();
    }
    delete temp;
    return output;
}

void linkedList::add(int element)
{
    Node *n = new Node(element);
    if(head == nullptr)
    {
        head = n;
        tail = n;
        link = n;
    }
    else
    {
        link->set_next(n);
        tail = n;
        link = n;
    }

}

void linkedList::add(int element, int position)
{
    int flag = 0;
    try
    {
        if(position<0)
            throw "Invalid position (Enter positive number)";
    }
    catch(const char *error)
    {
        std::cout<<"Error: "<<error<<endl;
        flag=1;
    }

    if(flag != 1)
    {
        int count = 0;
        Node *n = new Node(element);
        Node *temp1 = new Node();
        Node *temp2 = new Node();
        temp1 = head;

        if(position==0)
        {
            temp1 = head;
            head = n;
            n->set_next(temp1);
        }

        else if(position==1)
        {
            temp1 = head;
            temp2 = temp1->get_next();
            temp1->set_next(n);
            n->set_next(temp2);
        }

        else if(position>=2)
        {
            do
            {
                temp1 = temp1->get_next();
                ++count;
            }
            while(count!=(position-1));
            temp2 = temp1->get_next();
            temp1->set_next(n);
            n->set_next(temp2);
        }
    }
}

void linkedList::remove(int element)
{
    Node *temp1 = new Node();
    Node *temp2 = new Node();
    Node *temp = new Node();
    temp1 = head;
    temp2 = temp1->get_next();
    temp = tail;

    if(temp1->get_element() == element)
    {
        temp1->set_next(nullptr);
        head = temp2;
        delete temp1;
    }

    else if(temp->get_element() == element)
    {
        while(temp2->get_element() != element)
        {
            temp1 = temp1->get_next();
            temp2 = temp2->get_next();
        }
        tail = temp1;
        temp1->set_next(nullptr);
        delete temp;
    }

    else
    {
        Node *temp3 = new Node();
        temp3 = temp2->get_next();

        while(temp2->get_element() != element)
        {
            temp1 = temp1->get_next();
            temp2 = temp2->get_next();
            temp3 = temp3->get_next();
        }
        temp2->set_next(nullptr);
        temp1->set_next(temp3);
        delete temp2;
    }
}

int linkedList::value(int position)
{
    Node *temp = new Node();
    temp = head;
    int count = 0;

    if(position==0)
    {
        return temp->get_element();
    }

    else if(position==1)
    {
        temp = temp->get_next();
        return temp->get_element();
    }

    else if(position>=2)
    {
        while(count != (position))
        {
            temp = temp->get_next();
            count++;
        }
        return temp->get_element();
    }

}