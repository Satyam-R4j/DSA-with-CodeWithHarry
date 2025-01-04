// video 30,31

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Stack
{
    int data;
    struct Stack *next;
};

int isFull(struct Stack *top)
{
    struct Stack *ptr = (struct Stack *)malloc(sizeof(struct Stack));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Stack *push(struct Stack *top, int data)
{
    if (isFull(top))
    {
        printf("Stack Overflow!!\n");
    }
    else
    {
        struct Stack *n = (struct Stack *)malloc(sizeof(struct Stack));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Stack **top)
{
    if (isEmpty(*top))
    {
        printf("the stack is Underflow!!\n");
    }
    else
    {
        struct Stack *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Stack *top ,int pos)
{
    struct Stack *ptr = top;

    for (int i = 0; (ptr != NULL && i < pos - 1); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

void linkedListTraversal(struct Stack *ptr)
{
    while (ptr != NULL)

    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{

    struct Stack *top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    linkedListTraversal(top);

    // int element = pop(&top);
    // printf("the popped element is:%d\n", element);
    linkedListTraversal(top);

    for (int i = 1; i < 4; i++)
    {

        printf("Value of position %d is: %d\n", i, peek(top,i));
    }

    return 0;
}
