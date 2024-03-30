#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int n, choice, top = -1, stack[MAX], element;

void push()
{
    if (top == n - 1)
    {
        printf("\n\tOVERFLOW\n\t");
    }
    else
    {
        printf("\n\tEnter the element to store in the stack: \n\t");
        scanf("%d", &element);
        top += 1;
        stack[top] = element;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n\tUNDERFLOW\n\t");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top -= 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\n\tStack is empty\n\t");
    }
    else
    {
        printf("\n\tElements in the stack:\n\t");
        for (int i = top; i >= 0; i--)
        {
            printf("\n\t%d\n\t", stack[i]);
        }
    }
}

int main()
{
    printf("\n\tSTACK OPERATION.\n\tYou can input up to 100 elements in the stack.\n\t");
    printf("\n\tEnter how many elements do you want to input in the stack.\n\t ");
    scanf("%d", &n);
    do
    {
        printf("\n\tEnter your choice.\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n\t");
        scanf("\n\t%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\tExiting...\n\t");
            break;
        default:
            printf("\n\tEnter a correct number and try again.\n\t");
        }

    } while (choice != 4);
    return 0;
}
