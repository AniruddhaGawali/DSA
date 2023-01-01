#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int coeff;
    int expo;
    struct node *next;
} node;

node *create()
{
    node *head, *p;
    int k, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (k = 0; k < n; k++)
    {
        if (k == 0)
        {
            head = (node *)malloc(sizeof(node *));
            p = head;
        }
        else
        {
            p->next = (node *)malloc(sizeof(node *));
            p = p->next;
        }
        printf("Enter the coefficient: ");
        scanf("%d", &p->coeff);
        printf("Enter the exponent: ");
        scanf("%d", &p->expo);
    }
    p->next = NULL;
    return head;
}

node *display(node *head)
{
    while (head != NULL)
    {
        printf("%dx^%d + ", head->coeff, head->expo);
        head = head->next;
    }
    printf("0");
    printf("\n");
}

node *add(node *q, node *p)
{
    node *last;
    last = (node *)malloc(sizeof(node *));
    while (p != NULL && q != NULL)
    {
        if (p->expo > q->expo)
        {
            last->expo = p->expo;
            last->coeff = p->coeff;
            p = p->next;
        }
        else if (p->expo < q->expo)
        {
            last->expo = q->expo;
            last->coeff = q->coeff;
            q = q->next;
        }
        else
        {
            last->expo = p->expo;
            last->coeff = p->coeff + q->coeff;
            p = p->next;
            q = q->next;
        }
    }
    return last;
}
int main()
{
    node *p, *q, *result;
    p = create();
    display(p);
    q = create();
    display(q);
    result = add(p, q);
    display(result);
}