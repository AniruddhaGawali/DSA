#include <stdio.h>
#include <stdlib.h>

// binary tree node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void PreOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d", root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d", root->data);
}

int main()
{
    struct node *root = newNode(7);
    root->left = newNode(2);
    root->right = newNode(1);
    root->left->left = newNode(0);
    root->left->right = newNode(4);

    printf("Pre Order\t");
    PreOrder(root);
    printf("\n");
    printf("Post Order\t");
    PostOrder(root);
    printf("\n");

    return 0;
}