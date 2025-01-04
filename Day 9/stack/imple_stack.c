// Video 24

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    struct Stack *s;
    s->size = 5;
    s->top = -1;

    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    // s->arr[0] = 1;
    // s->top++;

    // s->arr[1] = 2;
    // s->top++;

    // s->arr[2] = 3;
    // s->top++;

    // s->arr[3] = 4;
    // s->top++;
    
    // s->arr[4] = 5;
    // s->top++;

    if (isEmpty(s))
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("the stack is not empty\n");
    }

    if (isFull(s))
    {
        printf("the stack is full!\n");
    }
    else
    {
        printf("the stack is not full!\n");
    }

    return 0;
}
