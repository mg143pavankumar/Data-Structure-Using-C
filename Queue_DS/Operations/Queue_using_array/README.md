# Queue Using Array
+ A queue data structure can be implemented using one dimensional array.
+ Queue is implemented using array can store only fixed number of data values.
+ The implementation of queue data structure using array is very simple, just define a one dimensional array of specific
size.
+ Insert or delete the values into that array by using FIFO (First In First Out) principle with the help of variables 'front' and 'rear'.
+ Initially both 'front' and 'rear' are set to -1.
+ Whenever, we want to insert a new value into the queue, increment 'rear' value by one
and then insert at that position.
+ Whenever we want to delete a value from the queue, then increment 'front' value by one and then display the value at 'front' position as deleted
element.


# Queue Operations using Array

Before we implement actual operations, first follow the below steps to create an empty queue.
+ Step 1: Include all the __rooter files__ which are used in the program and define a
constant __'SIZE'__ with specific value.
+ Step 2: Declare all the user defined functions which are used in queue implementation.
+ Step 3: Create a one dimensional array with above defined SIZE __(int queue[SIZE])__
+ Step 4: Define two integer variables 'front' and 'rear' and initialize both with '-1'.
__(int front = -1, rear = -1)__
+ Step 5: Then implement main method by displaying menu of operations list and make
suitable function calls to perform operation selected by the user on queue.


## enQueue(value) - Inserting value into the queue

steps to insert an element into the queue...
+ Step 1: Check whether queue is FULL. (rear == SIZE-1)
+ Step 2: If it is FULL, then display "Queue is FULL!!! Insertion is not possible!!!" and terminate the function.
+ Step 3: If it is NOT FULL, then increment rear value by one __(rear++)__ and set __queue[rear] = value.__

``` 
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

```

## deQueue() - Deleting a value from the Queue

steps to delete an element into the queue...
+ Step 1: Check whether queue is EMPTY. (front == rear)
+ Step 2: If it is EMPTY, then display "Queue is EMPTY!!! Deletion is not
possible!!!" and terminate the function.
+ Step 3: If it is NOT EMPTY, then increment the front value by one (front ++).
+ Step 4: Then display queue[front] as deleted element. Then check whether
both front and rear are equal (front == rear),
+ Step 5:  if it TRUE, then set both front and rear to '-1' __(front = rear = -1)__.

```

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

```

## display() - Displays the elements of a Queue
We can use the following steps to display the elements of a queue...
+ Step 1: Check whether queue is EMPTY. (front == rear)
+ Step 2: If it is EMPTY, then display "Queue is EMPTY!!!" and terminate the
function.
+ Step 3: If it is NOT EMPTY, then define an integer variable 'i' and set 'i = front+1'.
+ Step 4: Display 'queue[i]' value and increment 'i' value by one (i++). 
+ Step 5: Repeat the same until 'i' value is equal to rear (i <= rear).

```
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
```
