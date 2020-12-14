#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *root = NULL;

//function for insertion of data
void insertAtStart();
void insertInMiddle();
void insertAtEnd();

//Function for finding length of the linked list
int length();

//Function for deleting the data from linked list
void delete ();

//Function for displaying the data
void display();

int main()
{

    while (1)
    {
        printf("\n\n=====> Single Linked list ======>\n\n");
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
            delete ();
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

    printf("Enter node data:\n");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->next = root;
        root = temp;
    }
}

void insertInMiddle()
{
    int location, len;
    len = length();

    printf("Enter the location of the node:\n");
    scanf("%d", &location);

    if (location > len)
    {
        printf("Invalid location....!!");
    }
    else
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));

        printf("Enter the node data: ");
        scanf("%d", &temp->data);
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
        p->next = temp;
    }
}

void insertAtEnd()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the node data: ");
    scanf("%d", &temp->data);
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

void delete ()
{
    int location, len;
    printf("Enter the location of node to be deleted: ");
    scanf("%d", &location);

    len = length();

    if (location > len)
    {
        printf("Invalid locaiton...!!!");
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
            temp->next = NULL;
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
        free(q);
    }
    display();
}

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