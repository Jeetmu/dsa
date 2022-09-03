#include<iostream>
#include <cstdlib>
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
        cout << "Element: "<<ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    //Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 79;
    head->next = second;

    //Link second and third nodes
    second->data = 24;
    second->next = third;

    //Link third and forth nodes
    third->data = 71;
    third->next = forth;

    //Terminate the LIst at the third node
    forth->data = 17;
    forth->next = NULL;

    LinkedListTraversal(head);
    
    return 0;
}