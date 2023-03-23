#include <stdio.h>
#include <stdlib.h>

// binary tree root
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *nr = (struct node *)malloc(sizeof(struct node));
    nr->data = data;
    nr->left = NULL;
    nr->right = NULL;

    return nr;
}

void addNode(int data, struct node *root)
{
    struct node *current_root = root;
    struct node *newNode;

    while (1)
    {
        if (current_root->data >= data)
        {
            if (current_root->left != NULL)
            {
                current_root = current_root->left;
            }
            else
            {
                newNode = createNode(data);
                current_root->left = newNode;
                return;
            }
        }
        else if (current_root->data <= data)
        {
            if (current_root->right != NULL)
            {
                current_root = current_root->right;
            }
            else
            {
                newNode = createNode(data);
                current_root->right = newNode;
                return;
            }
        }
    }
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

void InOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    PostOrder(root->left);
    printf("%d", root->data);
    PostOrder(root->right);
}

int main()
{
    struct node *root = createNode(5);
    addNode(3, root);
    addNode(3, root);
    addNode(1, root);
    addNode(6, root);

    printf("Pre Order\t");
    PreOrder(root);
    printf("\n");
    printf("Post Order\t");
    PostOrder(root);
    printf("\n");
    printf("In Order\t");
    InOrder(root);
    printf("\n");

    return 0;
}