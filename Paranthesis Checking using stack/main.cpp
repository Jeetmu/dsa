#include<iostream>
#include<cstdlib>
using namespace std;

struct stack {
    int size;
    int top;
    char * arr;
};

int isEmpty(struct stack * ptr){
    if (ptr->top == -1){
        return 1;
    }else {
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size - 1){
        return 1;
    }else {
        return 0;
    }
}
void push (struct stack *ptr, char val){
    if (isFull(ptr)){
        cout << " stack overflow, can't push "<< val << endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop (struct stack *ptr){
    if (isEmpty(ptr)){
        cout << "Stack Underflow "<< endl;
    }else{
        char c = ptr->arr[ptr->top];
        ptr->top--;
        return c;
    }
}
int parenthesisMatch(char * exp){
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '('){
            push(sp, '(');
        }else if (exp[i] == ')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isEmpty(sp)){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    char * exp = "(8)(*--$$9))";
    // Check if stack is empty
    if(parenthesisMatch(exp)){
        // cout << "The parenthesis is matching "<< endl;
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
    return 0;
}