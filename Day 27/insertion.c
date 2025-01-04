// Video 76

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

struct node *IterSearchBST(struct node *root, int data)
{

    while (root != NULL)
    {

        if (data == root->data)
        {
            return root;
        }
        else if (root->data > data)
        {
            root = root->left;
        }
        else if (root->data < data)
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int data)
{
    struct node *pre = NULL;
    while (root != NULL)
    {
        pre = root;
        if (root->data == data)
        {
            return;
        }
        else if (root->data > data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(data);
    if (data < pre->data)
    {
        pre->left = new;
    }
    else
    {
        pre->right = new;
    }
}

int main(int argc, char const *argv[])
{

    struct node *n1 = createNode(5);
    struct node *n2 = createNode(3);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(1);
    struct node *n5 = createNode(4);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    // struct node *n = IterSearchBST(n1, 6);

    insert(n1, 7);
    struct node *n = IterSearchBST(n1, 7);
    if (n != NULL)
    {
        printf("Element is found!!\n");
    }
    else
    {
        printf("Element is not found!!\n");
    }
    return 0;
}
