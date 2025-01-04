// Video 65,67

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *_node;
    _node = (struct node *)malloc(sizeof(struct node));
    _node->data = data;
    _node->left = NULL;
    _node->right = NULL;
    return _node;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(int argc, char const *argv[])
{
    // struct node *n1 = (struct node *)malloc(sizeof(struct node));
    // n1->left = ;
    // n1->right = NULL;

    // struct node *n2 = (struct node *)malloc(sizeof(struct node));
    // n2->left = NULL;
    // n2->right = NULL;

    // struct node *n3 = (struct node *)malloc(sizeof(struct node));
    // n3->left = NULL;
    // n3->right = NULL;

    // n1->left = n2;
    // n1->right = n3;

    struct node *n1 = createNode(2);
    struct node *n2 = createNode(3);
    struct node *n3 = createNode(4);
    struct node *n4 = createNode(6);
    struct node *n5 = createNode(4);

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    preOrder(n1);

    return 0;
}
