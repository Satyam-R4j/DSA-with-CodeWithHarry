// Video 21

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void doublyLinkedListTransverse(struct Node* ptr){

    while (ptr!=NULL)
    {
        printf("Element is :%d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

int main(int argc, char const *argv[])
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = forth;
    third->prev = second;

    forth->data = 40;
    forth->next = NULL;
    forth->prev = third;

    doublyLinkedListTransverse(head);

    return 0;
}
