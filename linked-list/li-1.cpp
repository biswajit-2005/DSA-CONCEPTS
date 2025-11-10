#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node *createnode(int val)
    {
        node *newnode;
        newnode->data = val;
        newnode->next = nullptr;

        return newnode;
    }

    void insertbegin(int val)
    {
        node *newnode = createnode(val);
    }
};