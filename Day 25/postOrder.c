// Video 67,68,69

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
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}
int main(int argc, char const *argv[])
{
    struct node *n1 = createNode(4);
    struct node *n2 = createNode(1);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(5);
    struct node *n5 = createNode(2);

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    preOrder(n1);
    // postOrder(n1);
    inOrder(n1);

    return 0;
}
