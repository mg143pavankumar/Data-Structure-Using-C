# Operations
In a single linked list we perform the following operations...
+ Insertion
+ Deletion
+ Display
    
Before we implement actual operations, first we need to setup empty list. 

### First perform the following steps before implementing actual operations.
+ Step 1: Include all the rooter files which are used in the program.
+ Step 2: Declare all the user defined functions.
+ Step 3: Define a Node structure with two members __data__ and __next__
+ Step 4: Define a Node pointer '**root**' and set it to **NULL**.
+ Step 4: Implement the main method by displaying operations menu and make suitable function calls in the main method to perform user selected operation.


## Insertion
In a single linked list, the insertion operation can be performed in three ways. They are as follows...
+ Inserting At Beginning of the list
+ Inserting At End of the list
+ Inserting At Specific location in the list

### Inserting At Beginning of the list
We can use the following steps to insert a new node at beginning of the single linked list...
+ Step 1: Create a __temp__ node with given value.
+ Step 2: Check whether list is __Empty__ (root == NULL)
+ Step 3: If it is __Empty__ then, set temp -> next = NULL and root = temp.
+ Step 4: If it is __Not Empty__ then, set temp -> next = root and root = temp.

### Implementation is shown below
```
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
```
    
    
### Inserting At End of the list
We can use the following steps to insert a new node at end of the single linked list...
+ Step 1: Create a __temp__ node with given value and temp -> next as NULL.
+ Step 2: Check whether list is __Empty__ (root == NULL).
+ Step 3: If it is __Empty__ then, set root = temp.
+ Step 4: If it is __Not Empty__ then, define a node pointer **p** and initialize with root.
+ Step 5: Keep moving the **p** to its **next node** until it reaches to the last node in the list (until p -> next is equal to NULL).
+ Step 6: Set __p -> next = temp__.

### Implementation is shown below.
```
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
```


### Inserting At Specific location in the list (After a Node)
We can use the following steps to insert a new node after a node in the single linked list...
+ Step 1: Create a function for finding lenght of a node.
+ Step 2: Get the location from the user where they want to insert the node.
+ Step 3: Check whether the location is not greater than node length.
+ Step 4: If it is Not then,  get the data from user and make temp -> next = NULL.
+ Step 5: define a pointer **p** and initilize to __root__.
+ Step 6: Keep moving the __p__ to its next node until it reaches to the specified location (until i < location).
+ Step 7: Finally, Set 'temp -> next = p -> next' and 'p -> next = temp'

### Implementation is shown below.
```
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

```

### Deletion of a node at a specified location
In a single linked list, the deletion operation can be performed in three ways. They are as follows...
+ Deleting from Beginning of the list
+ Deleting from End of the list
+ Deleting a Specific Node

### Deleting from Beginning of the list
We can use the following steps to delete a node from beginning of the single linked list...
+ Step 1: Check whether list is Empty (root == NULL)
+ Step 2: If it is Empty then, display 'List is Empty!!! Deletion is not possible' and terminate the function.
+ Step 3: If it is Not Empty then, define a Node pointer 'temp' and initialize with root.
+ Step 4: Check whether list is having only one node (temp -> next == NULL)
+ Step 5: If it is TRUE then set root = NULL and delete temp (Setting Empty list conditions)
+ Step 6: If it is FALSE then set root = temp -> next, and delete temp.


### Deleting from End of the list
We can use the following steps to delete a node from end of the single linked list...
+ Step 1: Check whether list is Empty (root == NULL)
+ Step 2: If it is Empty then, display 'List is Empty!!! Deletion is not possible' and terminate the function.
+ Step 3: If it is Not Empty then, define two Node pointers 'temp1' and 'temp2' and initialize 'temp1' with root.
+ Step 4: Check whether list has only one Node (temp1 -> next == NULL)
+ Step 5: If it is TRUE. Then, set root = NULL and delete temp1. And terminate the function. (Setting Empty list condition)
+ Step 6: If it is FALSE. Then, set 'temp2 = temp1 ' and move temp1 to its next node. Repeat the same until it reaches to the last node in the list. (until temp1 -> next == NULL)
+ Step 7: Finally, Set temp2 -> next = NULL and delete temp1.


### Deleting a Specific Node from the list
We can use the following steps to delete a specific node from the single linked list...
+ Step 1: First we create a function to __find length of the node.
+ Step 2: We get the __location__ of the node from the user which they want to delete.
+ Step 3: After getting the location we check whether it is greater than length of the node or not.
+ Step 4: If it __is greater__ than lenght of the node than __display invalid locaiton__.
+ Step 5: else if location = 1, then we create a pointer node _temp_ and initialize to __root__.
  + Step 5.1: if  __temp -> next == NULL__ then we make __root = NULL__ and free the pointer __temp__.
  + Step 5.2: else __root = temp -> next__ , __temp -> next = NULL__ and we free the pointer __temp__.
+ Step 6: else if location != 1 then we make a two pointer node __p__ and __q__. (p = root)
  + Step 6.1: Keep moving the pointer __p__ unless ( i < location - 1)
  + Step 6.2. After reaching at the location we make q =  p -> next, p -> next = q -> next, q -> next = NULL and free the pointer __q__.
    
    
### Implementation is shown below.

```

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
            free(temp);
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

```
    
### Displaying a Single Linked List
We can use the following steps to display the elements of a single linked list...
+ Step 1: Check whether list is Empty (root == NULL)
+ Step 2: If it is Empty then, display 'List is Empty!!!' and terminate the function.
+ Step 3: If it is Not Empty then, define a Node pointer 'temp' and initialize with root.
+ Step 4: Keep displaying temp -> data with an arrow (--->) until temp reaches to the last node
+ Step 5: Finally display temp ->data with arrow pointing to NULL (temp -> data ---> NULL).

### Implementation is shown below.
```
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
```
