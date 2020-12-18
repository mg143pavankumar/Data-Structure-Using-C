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
+ Step 1: Create a newNode with given value.
+ Step 2: Check whether list is Empty (root == NULL)
+ Step 3: If it is Empty then, set newNode -> next = NULL and root = newNode.
+ Step 4: If it is Not Empty then, set newNode -> next = root and root = newNode.

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
+ Step 1: Create a newNode with given value and newNode -> next as NULL.
+ Step 2: Check whether list is Empty (root == NULL).
+ Step 3: If it is Empty then, set root = newNode.
+ Step 4: If it is Not Empty then, define a node pointer temp and initialize with root.
+ Step 5: Keep moving the temp to its next node until it reaches to the last node in the list (until temp -> next is equal to NULL).
+ Step 6: Set temp -> next = newNode.

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
+ Step 1: Create a newNode with given value.
+ Step 2: Check whether list is Empty (root == NULL)
+ Step 3: If it is Empty then, set newNode -> next = NULL and root = newNode.
+ Step 4: If it is Not Empty then, define a node pointer temp and initialize with root.
+ Step 5: Keep moving the temp to its next node until it reaches to the node after which we want to insert the newNode (until temp1 -> data is equal to location, here location is the node value after which we want to insert the newNode).
+ Step 6: Every time check whether temp is reached to last node or not. If it is reached to last node then display 'Given node is not found in the list!!! Insertion not possible!!!' and terminate the function. Otherwise move the temp to next node.
+ Step 7: Finally, Set 'newNode -> next = temp -> next' and 'temp -> next = newNode'

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
    • Step 1: Check whether list is Empty (root == NULL)
    • Step 2: If it is Empty then, display 'List is Empty!!! Deletion is not possible' and terminate the function.
    • Step 3: If it is Not Empty then, define two Node pointers 'temp1' and 'temp2' and initialize 'temp1' with root.
    • Step 4: Keep moving the temp1 until it reaches to the exact node to be deleted or to the last node. And every time set 'temp2 = temp1' before moving the 'temp1' to its next node.
    • Step 5: If it is reached to the last node then display 'Given node not found in the list! Deletion not possible!!!'. And terminate the function.
    • Step 6: If it is reached to the exact node which we want to delete, then check whether list is having only one node or not
    • Step 7: If list has only one node and that is the node to be deleted, then set root = NULL and delete temp1 (free(temp1)).
    • Step 8: If list contains multiple nodes, then check whether temp1 is the first node in the list (temp1 == root).
    • Step 9: If temp1 is the first node then move the root to the next node (root = root → next) and delete temp1.
    • Step 10: If temp1 is not first node then check whether it is last node in the list (temp1 → next == NULL).
    • Step 11: If temp1 is last node then set temp2 → next = NULL and delete temp1 (free(temp1)).
    • Step 12: If temp1 is not first node and not last node then set temp2 → next = temp1 → next and delete temp1 (free(temp1)).
    
    
### Displaying a Single Linked List
We can use the following steps to display the elements of a single linked list...
+ Step 1: Check whether list is Empty (root == NULL)
+ Step 2: If it is Empty then, display 'List is Empty!!!' and terminate the function.
+ Step 3: If it is Not Empty then, define a Node pointer 'temp' and initialize with root.
+ Step 4: Keep displaying temp -> data with an arrow (--->) until temp reaches to the last node
+ Step 5: Finally display temp ->data with arrow pointing to NULL (temp -> data ---> NULL).
