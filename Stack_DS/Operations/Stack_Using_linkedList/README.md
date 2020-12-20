# Stack using linked list
+ A stack data structure can be implemented by using linked list data structure. 
+ The stack implemented using linked list can work for unlimited number of values.
+ That means, stack implemented using linked list works for variable size of data.
+ So, there is no need to fix the size at the beginning of the implementation. 
+ The Stack implemented using linked list can organize as many data values as we want.

### Implementation
+ In linked list implementation of a stack, every new element is inserted as 'top' element.
+ That means every newly inserted element is pointed by 'top'.
+ Whenever we want to remove an element from the stack, simply remove the node which is pointed by 'top' by moving 'top' to
its next node in the list.
+ The next field of the first element must be always NULL

# Operations

To implement stack using linked list, we need to set the following things before
implementing actual operations.
+ Step 1: Include all the __rooter files__ which are used in the program. And declare all
the user defined functions.
+ Step 2: Define a __'Node' structure__ with two members __data and next__.
+ Step 3: Define a Node pointer __'top'__ and set it to __NULL__.
+ Step 4: Implement the main method by displaying Menu with list of operations and
make suitable function calls in the main method.

## push(value) - Inserting an element into the Stack
We can use the following steps to insert a new node into the stack...
+ Step 1: Create a __temp__ node  with given value.
+ Step 2: Check whether stack is __Empty (top == NULL)__
+ Step 3: If it is __Empty__, then set temp -> next = NULL.
+ Step 4: If it is __Not Empty__, then set temp -> next = top.
+ Step 5: Finally, set top = temp.

## pop() - Deleting an Element from a Stack
We can use the following steps to delete a node from the stack...
+ Step 1: Check whether stack is __Empty (top == NULL)__.
+ Step 2: If it is __Empty__, then display __"Stack is Empty!!! Deletion is not
possible!!!"__ and terminate the function.
+ Step 3: If it is __Not Empty__, then define a Node pointer __'temp'__ and set it to 'top'.
+ Step 4: Then set __'top = top -> next'.
+ Step 5: Finally, delete 'temp' __(free(temp))__.


## display() - Displaying stack of elements
We can use the following steps to display the elements (nodes) of a stack...
+ Step 1: Check whether stack is __Empty (top == NULL)__.
+ Step 2: If it is __Empty__, then display __'Stack is Empty!!!'__ and terminate the function.
+ Step 3: If it is __Not Empty__, then define a Node pointer __'temp'__ and initialize with __top__.
+ Step 4: Display __'temp -> data --->'__ and move it to the next node. Repeat the same
until temp reaches to the first node in the stack (temp -> next != NULL).
+ Step 4: Finally! Display __'temp -> data ---> NULL'__.
