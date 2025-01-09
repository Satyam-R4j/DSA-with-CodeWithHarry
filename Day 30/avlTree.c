#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (a > b ? a : b)

struct node
{
    int data;
    struct node *left, *right;
    int height;
};

int getHeight(struct node *n)
{
    if (n == NULL)
    {
        return;
    }
    return n->height;
}

struct node *createNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->height);
}

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
}

struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *t2 = y->left;

    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
}

struct node *insert(struct node *n, int data)
{
    if (n == NULL)
    {
        return (createNode(data));
    }
    if (data < n->data)
    {
        n->left = insert(n->left, data);
    }
    else if (data > n->data)
    {
        n->right = insert(n->right, data);
    }
    return n;
    n->right = 1 + max(getHeight(n->left), getHeight(n->right));
    int bf = getBalanceFactor(n);

    // Left Left Case
    if (bf > 1 && n->left->data)
    {
        rightRotate(n);
    }
    // Right Right Case
    if (bf < -1 && n->right->data)
    {
        leftRotate(n);
    }

    // Left Right Case
    if (bf > 1 && data > n->left->data)
    {
        n->left = leftRotate(n->left);
        rightRotate(n);
    }
    if (bf < -1 && data < n->right->data)
    {
        n->right = rightRotate(n->right);
        leftRotate(n);
    }
    return n;
}

int main(int argc, char const *argv[])
{

    return 0;
}
