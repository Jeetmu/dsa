#include<iostream>
#include<cstdlib>
using namespace std;

struct circularQueue{
    int size;
    int f;
    int r;
    int * arr;
}; 

int isFull(struct circularQueue * q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct circularQueue * q){
    if(q->r == q->f){
        return 1;
    }else{
        return 0;
    }
}

void enQueue(struct circularQueue * q, int val){
    if (isFull(q)){
        cout << "The queue is Full"<< endl;
    }else{
        q->r++;
        q->arr[q->r] = val;
        cout << "Enqued element: "<< val<<endl;
    }
}

int deQueue(struct circularQueue * q){
    int val = -1;
    if(isEmpty(q)){
        cout<<"The Queue is empty: "<< endl;
    }else{
        q->f++;
        val = q->arr[q->f];
    }
    return val;
}
 
int main()
{
    struct circularQueue q;
    q.size = 6;
    q.f = 0;
    q.r = 0;
    q.arr= (int *)malloc(q.size * sizeof(int));

    enQueue(&q, 12);
    enQueue(&q, 18);
    enQueue(&q, 25);
    enQueue(&q, 45);

    cout << "Dequeueing element: "<< deQueue(&q)<< endl;
    cout << "Dequeueing element: "<< deQueue(&q)<< endl;

    enQueue(&q, 88);
    enQueue(&q, 55);
    return 0;
}