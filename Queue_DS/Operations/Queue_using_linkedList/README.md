 # Queue using linked list
 + A queue data structure can be implemented using linked list data structure.
 + The queue which is implemented using linked list can work for unlimited number of values.
 + That means, queue using linked list can work for variable size of data (No need to fix the size at beginning
of the implementation).
+ The Queue implemented using linked list can organize as many data values as we want.
+ In linked list implementation of a queue, the last inserted node is always pointed by 'rear' and
the first node is always pointed by 'front'.

# Operations
To implement queue using linked list, we need to set the following things before
implementing actual operations.
+ Step 1: Include all the rooter files which are used in the program. And declare all
the user defined functions.
+ Step 2: Define a 'Node' structure with two members data and next.
+ Step 3: Define two Node pointers 'front' and 'rear' and set both to NULL.
+ Step 4: Implement the main method by displaying Menu of list of operations and
make suitable function calls in the main method to perform user selected operation.


## enQueue(value) - Inserting an element into the Queue
We can use the following steps to insert a new node into the queue...
+ Step 1: Create a temp node with given value and set __'temp → next' to NULL__.
+ Step 2: Check whether queue is __Empty (rear == NULL)__.
+ Step 3: If it is Empty then, set __front = temp__ and __rear = temp__.
+ Step 4: If it is Not Empty then, set __rear → next = temp__ and __rear = temp__.

```
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

```

## deQueue() - Deleting an Element from Queue
We can use the following steps to delete a node from the queue...
+ Step 1: Check whether queue is Empty (front == NULL).
+ Step 2: If it is Empty, then display "Queue is Empty!!! Deletion is not
possible!!!" and terminate from the function
+ Step 3: If it is Not Empty then, define a Node pointer 'temp' and set it to 'front'.
+ Step 4: Then set 'front = front → next' and delete 'temp' (free(temp)).

```

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

```
## display() - Displaying the elements of Queue
We can use the following steps to display the elements (nodes) of a queue...
+ Step 1: Check whether queue is Empty (front == NULL).
+ Step 2: If it is Empty then, display 'Queue is Empty!!!' and terminate the function.
+ Step 3: If it is Not Empty then, define a Node pointer 'temp' and initialize
with front.
+ Step 4: Display 'temp → data --->' and move it to the next node. Repeat the same
until 'temp' reaches to 'rear' (temp → next != NULL).
+ Step 4: Finally! Display 'temp → data ---> NULL

```
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
```
