#include <stdio.h>
#include <stdlib.h>

typedef struct nd
{
    struct nd *prev;
    int data;
    struct nd *next;
} node;

int main()
{

    node *head;
    node *current;
    printf("\n creating Linklist\n");
    for (int i = 0; i < 10; i++)
    {
        node *temp;
        temp = (node *)malloc(sizeof(node));
        if (i == 0)
        {

            temp->prev = NULL;
            temp->data = i;
            temp->prev = NULL;
            head = temp;
        }
        else if (i == 9)
        {
            temp->prev = current;
            temp->data = i;
            temp->next = head;
            current->next = temp;
            head->prev = temp;
        }
        else
        {
            temp->prev = current;
            temp->data = i;
            temp->next = NULL;
            current->next = temp;
        }
        current = temp;
    }

    printf("\n created Linklist\n");
    current = head;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}