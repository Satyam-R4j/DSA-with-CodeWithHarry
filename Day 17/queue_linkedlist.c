// Video 46

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue( int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is full!!");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *n = f;
    if (f == NULL)
    {
        printf("Queue is Empty");
    }
    else{
        f = f->next;
        val = n->data;
        free(n);
    }
    return val;
    
}

int main(int argc, char const *argv[])
{
    linkedListTraversal(f);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    linkedListTraversal(f);
    return 0;
}
