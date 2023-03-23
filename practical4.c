#include <stdio.h>
#include <stdlib.h>

typedef struct nd
{
    int data;
    struct nd *next;
} node;

node *Insertion(node *head, node *current, node **headAdd)
{
    int value;
    printf("Enter the value to insert >>  ");
    scanf("%d", &value);

    node *newNode;
    newNode = (node *)malloc(sizeof(node));

    if (head == NULL && current == NULL)
    {
        newNode->data = value;
        newNode->next = NULL;
        *headAdd = newNode;
        current = head;
    }
    else
    {
        newNode->data = value;
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    return current;
}

void display(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    node *head = NULL;
    node *current = NULL;
    printf("%d\n", head);
    current = Insertion(head, current, &head);
    printf("%d\n", head);
    current = Insertion(head, current, &head);
    printf("%d\n", head);
    current = Insertion(head, current, &head);
    printf("%d\n", head);
    display(head);
    return 0;
}