#include <iostream>
#include <cstdlib>
using namespace std;

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct Queue *ptr)
{
    if (ptr->r == ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *ptr)
{
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        cout << "Enqued Element " << val << endl;
    }
}

int deQueue(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        int a = -1;
        q->f++;
        a = q->arr[q->f];
        return a;
    }
}

int main()
{
    struct Queue q;
    q.size = 50;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enQueue(&q, 15);
    enQueue(&q, 25);
    enQueue(&q, 35);
    cout << "Dequeing the Elemnent: " << deQueue(&q) << endl;
    cout << "Dequeing the Elemnent: " << deQueue(&q) << endl;
    enQueue(&q, 255);
    enQueue(&q, 55);

    if (isEmpty(&q))
    {
        cout << "Queue is Empty" << endl;
    }
    if (isFull(&q))
    {
        cout << "Queue is Full" << endl;
    }
    return 0;
}