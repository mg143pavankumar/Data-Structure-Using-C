#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *root = NULL;

//Functions for insertion
void insertAtStart();
void insertInMiddle();
void insertAtEnd();

//Function for finding length of nodes
int length();

//Function for deleting the node from linked list
void delete();

//Function for displaying the node data
void display();

int main()
{
    while (1)
    {
        printf("\n\n=====> Double Linked list ======>\n\n");
        printf("Enter 1 - To insert at start\n");
        printf("Enter 2 - To insert in middle\n");
        printf("Enter 3 - To insert at end\n");
        printf("Enter 4 - To find the length\n");
        printf("Enter 5 - To delete node\n");
        printf("Enter 6 - To display the data\n");
        printf("Enter 7 - exit the program\n");

        int user;
        printf("Enter your option: ");
        scanf("%d", &user);

        switch (user)
        {
        case 1:
            insertAtStart();
            break;
        case 2:
            insertInMiddle();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            length();
            break;
        case 5:
            delete();
            break;
        case 6:
            display();
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("You enterd invalid option...!!!");
        }
    }

    return 0;
}

//function for insertion at start
void insertAtStart()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the node data: ");
    scanf("%d", &temp->data);

    temp->prev = NULL;
    temp->next = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->next = root;
        root->prev = temp;
        root = temp;
    }
}

//Function for inserting data in the middle
void insertInMiddle()
{
    int location, len;

    printf("Enter the node location: ");
    scanf("%d", &location);

    len = length();

    if (location > len)
    {
        printf("Invalid location....!!!");
    }
    else
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));

        printf("Enter the node data: ");
        scanf("%d", &temp->data);

        temp->prev = NULL;
        temp->next = NULL;

        struct node *p;
        p = root;

        int i = 1;
        while (i < location)
        {
            p = p->next;
            i++;
        }

        temp->next = p->next;
        p->next->prev = temp;

        temp->prev = p;
        p->next = temp;
    }
}

//Function for inserting data at end
void insertAtEnd()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the node data: ");
    scanf("%d", &temp->data);

    temp->prev = NULL;
    temp->next = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = temp;
        temp->prev = p;
    }
}

//Function for finding the length of the node
int length()
{
    int count = 0;
    struct node *temp;
    temp = root;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

//Function for deleting node from a specified location
void delete()
{
    int location, len;
    printf("Enter the locaiton of node to be deleted: ");
    scanf("%d", &location);

    len = length();

    if (location > len)
    {
        printf("Invalid location.....!!!\n");
    }
    else if (location == 1)
    {
        struct node *temp;
        temp = root;

        if (temp->next == NULL)
        {
            root = NULL;
        }
        else
        {
            root = temp->next;
            temp->next->prev = NULL;
            temp->next = NULL;
            temp->prev = NULL;
            free(temp);
        }
    }
    else
    {
        struct node *p, *q;
        p = root;

        int i = 1;
        while (i < location - 1)
        {
            p = p->next;
            i++;
        }

        q = p->next;
        p->next = q->next;
        q->next = NULL;
        q->prev = NULL;
        free(q);
    }
    display();
}

//Function for displaying the data 
void display()
{
    struct node *temp;
    temp = root;

    if (temp == NULL)
    {
        printf("List is empty");
    }
    else
    {
        int len = length();
        printf("Length of list:=> %d\n", len);
        while (temp != NULL)
        {
            printf("%d => ", temp->data);
            temp = temp->next;
        }
    }
}
