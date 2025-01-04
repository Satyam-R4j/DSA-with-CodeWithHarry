// Video 43

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *qu)
{
    // if (qu->r == qu->size -1)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    return (qu->r + 1) % qu->size == qu->f;
}

int isEmpty(struct circularQueue *qu)
{

    return qu->r == qu->f;
}

void enqueue(struct circularQueue *qu, int val)
{
    if (isFull(qu))
    {
        printf("This circularQueue is full!!\n");
    }
    else
    {
        qu->r = (qu->r + 1) % qu->size;
        qu->arr[qu->r] = val;
    }
}

int dequeue(struct circularQueue *qu)
{
    if (isEmpty(qu))
    {
        printf("This circularQueue is Empty!!\n");
    }
    else
    {
        qu->f = (qu->f + 1) % qu->size;
        return qu->arr[qu->f];
    }
}

int main(int argc, char const *argv[])
{
    struct circularQueue qu;
    qu.size = 4;
    qu.f = 0;
    qu.r = 0;
    qu.arr = (int *)malloc(qu.size * sizeof(int));

    // if (isEmpty(qu))
    // {
    //     printf("circularQueue is Empty!!");
    // }

    // dequeue few elements
    enqueue(&qu, 12);
    enqueue(&qu, 13);
    enqueue(&qu, 14);

    printf("the dequeue element is:%d\n", dequeue(&qu));
    printf("the dequeue element is:%d\n", dequeue(&qu));
    printf("the dequeue element is:%d\n", dequeue(&qu));
    enqueue(&qu, 14);

    enqueue(&qu, 14);
     enqueue(&qu, 14);


    if (isEmpty(&qu))
    {
        printf("circularQueue is Empty!!");
    }
    if (isFull(&qu))
    {
        printf("circularQueue is  full!!");
    }
    else
    {
        printf("circularQueue is not full!!");
    }

    return 0;
}
