#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;

//Functions for performing operation like push, pop  and display
void push();
void pop();
void display();

int main()
{
    while (1)
    {
        printf("\n\n<====== Stack using single linked list ======>\n\n");
        printf("Enter 1 - to push the data\n");
        printf("Enter 2 - to pop the data\n");
        printf("Enter 3 - to display the data\n");
        printf("Enter 4 - to exit\n");

        int user;
        printf("Enter your option: ");
        scanf("%d", &user);

        switch (user)
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
            exit(1);
            break;
        default:
            printf("Entered invalid option....!!!");
            break;
        }
    }

    return 0;
}

void push()
{
    struct stack *temp;
    temp = (struct stack *)malloc(sizeof(struct stack));

    printf("Enter the data: ");
    scanf("%d", &temp->data);

    temp->next = NULL;

    //Checking whether the stack is empty or not and if it is then added the data to it
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    struct stack *temp;
    temp = top;

    //Checking whether the stack is empty or not and if not then pop the data
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top = temp->next;
        temp->next = NULL;
        free(temp);
    }
    display();
}

void display()
{
    struct stack *temp;
    temp = top;

    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d => ", temp->data);
            temp = temp->next;
        }
    }
}