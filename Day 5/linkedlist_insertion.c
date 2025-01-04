// Video 16

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case 1 -> insertion at first index
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// case 2 -> insertion at any index
struct Node *insertAtBetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// case 3 -> insert at the end
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// case 4 -> insertion after a node

struct Node *insertAfterNode(struct Node *head, struct Node *preNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = preNode->next;
    preNode->next = ptr;
    return head;
}
int main(int argc, char const *argv[])
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 12;
    third->next = forth;

    forth->data = 10;
    forth->next = fifth;

    fifth->data = 1;
    fifth->next = NULL;

    printf("Linked list before insertion !!!\n");

    linkedListTraversal(head);
    // head = insertAtFirst(head,56);
    // head = insertAtBetween(head, 56, 3);
    // head = insertAtEnd(head, 56);
    // head = insertAtEnd(head, 56);
    head = insertAfterNode(head,third, 56);
    printf("Linked list after insertion !!!\n");

    linkedListTraversal(head);

    return 0;
}