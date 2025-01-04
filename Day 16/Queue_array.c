// Video 41

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *qu)
{
    // if (qu->r == qu->size -1)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    return qu->r == qu->size - 1;
}

int isEmpty(struct queue *qu)
{

    return qu->r == qu->f;
}

void enqueue(struct queue *qu, int val)
{
    if (isFull(qu))
    {
        printf("This Queue is full!!");
    }
    else
    {
        qu->r++;
        qu->arr[qu->r] = val;
    }
}
int dequeue(struct queue *qu)
{
    if (isEmpty(qu))
    {
        printf("This Queue is Empty!!");
    }
    else
    {
        qu->f++;
        return qu->arr[qu->f];
    }
}

int main(int argc, char const *argv[])
{
    struct queue qu;
    qu.size = 100;
    qu.f = -1;
    qu.r = -1;
    qu.arr = (int *)malloc(qu.size * sizeof(int));

    // if (isEmpty(qu))
    // {
    //     printf("Queue is Empty!!");
    // }

    // enqueue few elements
    enqueue(&qu, 12);
    enqueue(&qu, 13);
    enqueue(&qu, 14);

    // printf("the dequeue element is:%d\n",dequeue(&qu));
    // printf("the dequeue element is:%d\n",dequeue(&qu));
    // printf("the dequeue element is:%d\n",dequeue(&qu));
    // printf("the front element is:%d\n",qu.arr[qu.f]);

    if (isEmpty(&qu))
    {
        printf("Queue is Empty!!");
    }
    if (isFull(&qu))
    {
        printf("Queue is  full!!");
    }
    else
    {
        printf("Queue is not full!!");
    }

    return 0;
}
