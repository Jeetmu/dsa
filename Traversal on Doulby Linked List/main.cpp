#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
//traversal
void doulbyLinkedList (struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout <<"The Element: "<<ptr->data<< endl;
        ptr = ptr->prev;
    } while (ptr != head);

    
    
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
    head->prev = forth;
    head->data = 45;
    head->next = second;

    second->prev = head;
    second->data = 55;
    second->next = third;

    third->prev = second;
    third->data = 65;
    third->next = forth;

    forth->prev = third;
    forth->data = 75;
    forth->next = head;

    doulbyLinkedList(head);
    
    return 0;
}