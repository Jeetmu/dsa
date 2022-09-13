#include<iostream>
#include<cstdlib>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stcak Overflow, can't push any more to the stack";
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

void pop (struct stack *ptr)
{
 if (isEmpty(ptr))
 {
    cout << "The stcak is empty";
 }else{
    cout << "The element pop out "<< ptr->arr[ptr->top]<<endl;
    ptr->top--;
 }
 
}

int main()
{
    struct stack *p; 
    //alocate memory at heap
    p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 10;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));
    cout << "Stack has been created successfully"<<endl;
    cout <<"Before pushing, Full: "<<isFull(p) << endl;
    cout << "Before pushing, Empty: "<< isEmpty(p) <<endl;

    push(p, 35);
    push(p, 45);
    push(p, 55);
    push(p, 65);
    push(p, 75);
    push(p, 85);
    push(p, 95);
    push(p, 15);
    push(p, 25);
    push(p, 05);

    cout <<"Before pushing, Full: "<<isFull(p) << endl;
    cout << "Before pushing, Empty: "<< isEmpty(p) <<endl;

    cout << "Stack top integer "<<stackTop(p) << endl;
    cout << "Stack Bottom integer "<<stackBottom(p) << endl;
    stackBottom(p);

    return 0;
}