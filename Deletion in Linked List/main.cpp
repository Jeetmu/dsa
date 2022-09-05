#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
//Traversal

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "The Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
//deleting first node
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//deleting the element of given index
struct Node *deleteIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;

    for (int i = 0; i < index-1; i++)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = qtr->next;
    free(qtr);
    return head;
}
//deleting the last node
struct Node *deleteLast(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    while( qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    } 
    ptr->next = NULL;
    free(qtr);
    return head;
}
//deleting the element with the given value
struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    
    while (qtr->data = value && qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    if (qtr->data == value)
    {
        ptr->next = qtr->next;
        free(qtr);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *forth;
    struct Node *second;
    struct Node *third;

    //allocation memory for the nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    //Link the nodes
    head->data = 79;
    head->next = second;

    second->data = 81;
    second->next = third;

    third->data = 91;
    third->next = forth;

    forth->data = 21;
    forth->next = NULL;

    LinkedListTraversal(head);
    head = deleteFirst(head);

    cout << "After Deletion of head"<<endl;
    LinkedListTraversal(head);

    cout << "After Deletion of index"<<endl;
    head = deleteIndex(head, 0);
    LinkedListTraversal(head);

    cout << "Deletion at end"<<endl;
    head = deleteLast(head);
    LinkedListTraversal(head);

    cout << "Deletion of the value given"<<endl;
    head = deleteValue(head, 0);
    LinkedListTraversal(head);
    return 0;
}