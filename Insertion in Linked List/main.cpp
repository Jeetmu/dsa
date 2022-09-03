#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
//traversal
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: "<<ptr->data<< endl;
        ptr = ptr->next;
    }
}
//insertion at the begining
struct Node * insertatFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}
//insertion at the end
struct Node * insertatEnd(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    
    return head;
}
//insertion at index
struct Node * insertionatIndex(struct Node *head, int data, int index)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//insertion after node
struct Node *insertionafterNode(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //dynamic memory allocation at heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //link data and pointing the next data 
    head->data = 23;
    head->next = second;

    second->data = 65;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 65;
    fourth->next = NULL;

    linkedListTraversal(head);
    head = insertatFirst(head, 453);
    cout << "After Insertion at the begining "<< endl;
    linkedListTraversal(head);
    head = insertatEnd(head, 988);
    cout << "Insertion at the end "<< endl;
    linkedListTraversal(head);
    head = insertionatIndex(head, 565, 3);
    cout << "Insertion at the index "<< endl;
    linkedListTraversal(head);
    head = insertionafterNode(head, 975, third);
    cout << "Insertion after the node "<< endl;
    linkedListTraversal(head);
    return 0;
}