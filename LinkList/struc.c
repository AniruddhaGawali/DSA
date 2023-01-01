#include <stdio.h>
#include <stdlib.h>

typedef struct nd
{
    int data;
    struct nd *next;
} node;

node *create(int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node *insert(node *current, int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = NULL;
    temp->data = data;
    current->next = temp;
    return temp;
}

void display(node *head)
{
    node *current = head;
    printf("\n");
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void delete(node *current)
{
    node *temp = current - 1;
    temp->next = current->next;
    free(current);
}

int main()
{
    node *head = create(0);
    node *current = head;
    for (int i = 1; i <= 10; i++)
    {
        current = insert(current, i);
    }
    display(head);

    display(head);

    return 0;
}