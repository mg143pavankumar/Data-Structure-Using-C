#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 //defining the size of stack

int stack[SIZE];
int top = -1; //Let top = -1

//Declaring functions for performing operations like push,pop and display
void push(int value);
void pop();
void display();

int main()
{
    while (1)
    {
        printf("\n\n<====== Stack Using an Array ======>\n\n");
        printf("Enter 1 - to Push the data\n");
        printf("Enter 2 - to pop the data\n");
        printf("Enter 3 - to display the data\n");
        printf("Enter 4 - to exit\n");

        int user;
        printf("Enter your option: ");
        scanf("%d", &user);

        switch (user)
        {
        case 1:
        {
            int value;
            //Taking the data from the user for adding into the stack
            printf("\nEnter the data: \n");
            scanf("%d", &value);
            push(value);
        }
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
            printf("Entered invalid option ....!!!");
            break;
        }
    }
    return 0;
}

void push(int value)
{
    if (top == (SIZE - 1))
    {
        printf("Stack is full...!!");
    }
    else
    {
        /* Here we are increasing the top value 
           and adding data into the stack
        */
        top++;
        stack[top] = value;
    }
}

void pop()
{

    //Cheking wheather the stack is empty or not
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {

        /* Displaying the deleted data and we decreased top value 
         so that deleted data won't display
        */
        printf("deleted => %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}