/*
    C program to implement a Queue using an array
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//Function for implementing enqueue -> insertion
void enqueue(int value);

//Function for implementing dequeue -> deletion
void dequeue();

//Functionf for displaying the data
void display();


int Queue[SIZE];
int rear = -1;
int front = -1;


int main()
{
    while (1)
    {
        printf("\n\n<====== Queue using an Array ======>\n\n");
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
        {
            int data;
            printf("\nEnter the data: ");
            scanf("%d", &data);

            //calling enqueue function for insertion of data
            enqueue(data);
        }
        break;

        case 2:
            //calling dequeue function for deletion of data
            dequeue();
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


//Function for implementing enqueue -> insertion
void enqueue(int value){
    if (rear == (SIZE -1))
    {
        printf("\nQueue is full\n");
    }else
    {   
        if (front == -1)
            front = 0;
        
        rear++;
        Queue[rear] = value;

    }
    
}

//Function for implementing dequeue -> deletion
void dequeue(){
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }else{
        printf("Deleted => %d", Queue[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
        
    }
    
}

//Functionf for displaying the data
void display(){
    if (front == -1)
    {
        printf("Queue is empty\n");
    }else{
        int i;
        printf("Queue elements are:\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d ",Queue[i]);
        }
        
    }
    
}
