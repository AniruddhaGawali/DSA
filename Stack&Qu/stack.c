#include <stdio.h>

#define LEN 5

int stack[LEN];
int top = -1;

void push()
{
    if (top == LEN - 1)
    {
        printf("You can add any data Stack opver flow\n");
    }
    else
    {
        top++;
        stack[top] = top;
    }
}

void display()
{
    if (top != -1)
    {
        for (int i = top; i != 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
}

void pop()
{
    if (top != -1)
    {
        top--;
    }
    else
    {
        printf("Stack is empty\n");
    }
}

int main()
{
    push();
    push();
    push();
    push();
    push();
    display();
    printf("\n");

    pop();
    pop();
    // pop();
    display();

    return 0;
}