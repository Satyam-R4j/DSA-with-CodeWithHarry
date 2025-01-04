// Video 74

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

struct node *searchBST(struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data == root->data)
    {
        return root;
    }
    else if (root->data > data)
    {
        return searchBST(root->left, data);
    }
    else if (root->data < data)
    {
        return searchBST(root->right, data);
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

    struct node *n = searchBST(n1, 2);
    if (n != NULL)
    {
        printf("Element is found!!");
    }
    else
    {
        printf("Element is not found!!");
    }
    return 0;
}
