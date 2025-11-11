#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    // Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at the beginning.\n";
    }

    // Insert at end
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            cout << value << " inserted at the end.\n";
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << value << " inserted at the end.\n";
    }

    // Insert at specific position (1-based)
    void insertAtPosition(int value, int pos)
    {
        Node *newNode = new Node(value);

        if (pos <= 1 || head == nullptr)
        {
            newNode->next = head;
            head = newNode;
            cout << value << " inserted at position " << pos << ".\n";
            return;
        }

        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp->next != nullptr; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << value << " inserted at position " << pos << ".\n";
    }

    // Display linked list
    void display()
    {
        if (head == nullptr)
        {
            cout << "Linked List is empty.\n";
            return;
        }
        cout << "Linked List: ";
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    LinkedList list;
    int choice, value, pos;

    while (true)
    {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Specific Position\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> value >> pos;
            list.insertAtPosition(value, pos);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
