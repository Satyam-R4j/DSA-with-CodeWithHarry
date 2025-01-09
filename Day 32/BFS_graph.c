// Video 87

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

    int u;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    printf("%d", i);
    visited[i] = 1;
    enqueue(&qu, i);
    while (!isEmpty(&qu))
    {
        int node = dequeue(&qu);
        printf("The node is %d\n", node);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf(" the j is %d\n", j);
                visited[j] = 1;
                printf(" the visited of j is %d\n", visited[j]);
                enqueue(&qu, j);
            }
        }
    }

    return 0;
}
