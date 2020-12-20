/*
    C program to implement a Queue using linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

//Function for implementing enQueue => insertion
void enQueue();

//Function for implementing deQueue => deletion
void deQueue();

//Function for displaying the data
void display();

int main()
{

    while (1)
    {
        printf("\n\n<====== Queue using an Linked list ======>\n\n");
        printf("Enter 1 - to enqueue the data\n");
        printf("Enter 2 - to dequeue the data\n");
        printf("Enter 3 - to display the data\n");
        printf("Enter 4 - to exit\n");

        int user;
        printf("Enter your option: ");
        scanf("%d", &user);

        switch (user)
        {
        case 1:
            //calling enQueue function for insertion of data
            enQueue();
            break;

        case 2:
            //calling deQueue function for deletion of data
            deQueue();
            break;

        case 3:
            //Calling display function to display the data
            display();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("You have choosen invalid option....!!!!");
            break;
        }
    }

    return 0;
}

//Function for implementing enQueue => insertion
void enQueue()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &temp->data);

    temp->next = NULL;

    if (front == NULL)
    {
        front = temp;
        rear = temp;

        front -> next = NULL;
        rear -> next = NULL;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear -> next = NULL;
    }
}

//Function for implementing deQueue => deletion
void deQueue()
{
    struct node *temp;
    temp = front;

    if (front == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else{
        printf("Deleted => %d", temp -> data);
        front = front -> next;
        free(temp);
    }
    
}

//Function for displaying the data
void display()
{
    struct node *temp;
    temp = front;
    
    if (temp == NULL)
    {
        printf("Queue is empty\n");
    }else{
        while (temp != NULL)
        {
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        
    }
    
}
