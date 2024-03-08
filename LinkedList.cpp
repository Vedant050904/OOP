//
// LinkedList
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head;
    Node *second;
    Node *third;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;

    // We can use Loop for printing if there are so many linkedlists

    cout << "Print using Loops." << endl;
    Node *temp = head;
    while (temp != nullptr) // nullptr and NULL are same
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}