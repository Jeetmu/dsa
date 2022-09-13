#include<iostream>
using namespace std;

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *p)
{
    if(p->top == -1)
    {
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack *p)
{
    if(p->top == p->size - 1)
    {
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *p, int num)
{
    if (isFull(p))
    {
        cout << "The stack is full "<<endl;
    }
    else{
        p->top++;
        p->arr[p->top] = num;
    }   
}
void pop(struct stack *p)
{
    if (isEmpty(p))
    {
        cout << "The stack is Empty " << endl;
    }
    else{
        int val = p->arr[p->top];
        p->top--;
        cout << val<<endl;
    }
}
int peek(struct stack *p, int i)
{
    int arrayInd = p->top - i + 1;
    if (arrayInd < 0)
    {
        cout<<"Not a valid position in stack" << endl;
    }
    else{
        return p->arr[arrayInd];
    }
}
void display(struct stack *p)
{
    for (int i = 1; i < p->top; i++)
    {
        cout << "The value of the position "<<i <<" is "<< peek(p,i)<<endl;
    }
}

int main()
{
    struct stack *p;
    p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 10;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));

    cout << "The stack is created successfully"<<endl;
    cout << "Before pushing, Full: " << isFull(p) << endl;
    cout << "Before pushing, Empty: " << isEmpty(p)<< endl;

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);
    push(p, 5);
    push(p, 6);
    push(p, 7);
    push(p, 8);
    push(p, 9);
    push(p, 0);

    cout << "After pushing, Full: " << isFull(p) << endl;
    cout << "After pushing, Empty: " << isEmpty(p)<< endl;

    display(p);
    return 0;
}