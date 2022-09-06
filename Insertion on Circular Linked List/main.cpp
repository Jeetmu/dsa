#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
// traveral
void circularLinkedList(struct Node *head)
{
    struct Node *ptr = head;
    do
    {   
        cout << "The Element:" << ptr->data<< endl;
        ptr = ptr->next;
    } while (ptr != head);
}
//insertion
struct Node *insertValueAtFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr =  (struct Node *)malloc(sizeof(struct Node)); 
    ptr->data = data;
    struct Node *qtr = head->next;

    while (qtr->next != head)
    {
        qtr = qtr->next;
    }
    qtr->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    //allocate memory at heap
    head = (struct Node *)malloc(sizeof(struct Node)); 
    second = (struct Node *)malloc(sizeof(struct Node)); 
    third = (struct Node *)malloc(sizeof(struct Node)); 
    forth = (struct Node *)malloc(sizeof(struct Node)); 

    //chain the nodes
    head->data = 45;
    head->next = second;

    second->data = 55;
    second->next = third;

    third->data = 65;
    third->next = forth;

    forth->data = 75;
    forth->next = head;

    circularLinkedList(head);
    cout << "After insertion at the begining" << endl;
    head = insertValueAtFirst(head, 25);
    circularLinkedList(head);
    return 0;
}