// Video 18

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

// Deletion

// Case 1 -> delete first node
struct Node *deleteFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2 -> delete in between node

struct Node *deleteInBetween(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3 -> delete at End
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Case 4 -> delete a node at give value
struct Node *deleteAtGiveValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (p->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

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
    // // head = insertAtBetween(head, 56, 3);
    // // head = insertAtEnd(head, 56);
    // // head = insertAtEnd(head, 56);
    // head = insertAfterNode(head,third, 56);
    printf("Linked list after insertion !!!\n");

    // linkedListTraversal(head);

    // head = deleteFirstNode(head);
    // head = deleteInBetween(head, 2);
    // head = deleteAtEnd(head);
    head = deleteAtGiveValue(head, 12);
    linkedListTraversal(head);

    return 0;
}