#include <stdio.h>
int top = -1, stack[100];

void push(int top, int x, int n, int stack[100])
{
    if (top >= n - 1)
        printf("Stack is Overflow\n");
    else
        printf("Enter the element to be pushed :\n");
    scanf("%d", &x);
    top++;
    stack[top] = x;
}

void pop()
{
    if (top < 0)
        printf("Stack is Underflow\n");
    else
        printf("The element to be popped is %d", stack[top]);
    top--;
}

void peak()
{
    if (top < 0)
        printf("Stack is Underflow\n");
    else
        printf("The peak value is %d", stack[top]);
}

void display(int i)
{
    if (top >= 0)
    {
        printf("The elements in Stack are :\n");
        for (i = top; i >= 0; i--)
            printf("%d", stack[i]);
    }
    else
        printf("Stack is Underflow");
}

int main()
{
    int choice, n, x, i;

    printf("Enter the size of stack[MAX=100] : ");
    scanf("%d", &n);

    while (1)
    {
        printf("\n1.PUSH\n2.POP\n3.PEAK\n4.DISPLAY\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(top, x, n, stack);
            break;

        case 2:
            pop();
            break;

        case 3:
            peak();
            break;

        case 4:
            display(i);
            break;

        case 5:
            return 0;

        default:
            printf("Please Enter The Correct Choice \n");
        }
    }
}