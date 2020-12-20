# Stack Using an array:
+ A stack data structure can be implemented using __one dimensional array__.
+ But stack implemented using array, can store only fixed number of data values.
+ This implementation is very simple, just define a __one dimensional array of specific size__ and insert or
delete the values into that array by using __LIFO principle__ with the help of a variable __'top'__.
+ Initially __top is set to -1__.
+ Whenever we want to __insert a value__ into the stack, __increment the top value by one__
and then insert.
+ Whenever we want to __delete a value__ from the stack, then delete the top value
and __decrement the top value by one__.


# Stack Operations using Array

Before implementing actual operations, first follow the below steps to create an empty stack.
+ Step 1: Include all the __rooter files__ which are used in the program and define a
__constant 'SIZE'__ with specific value.
+ Step 2: Declare all the functions used in stack implementation.
+ Step 3: Create a one dimensional array with fixed size **(int stack[SIZE])**
+ Step 4: Define a integer variable __'top'__ and initialize with '-1'. **(int top = -1)**
+ Step 5: In main method display menu with list of operations and make suitable
function calls to perform operation selected by the user on the stack.

## push(value) - Inserting value into the stack
+ In a stack, push() is a function used to insert an element into the stack.
+ In a stack, the new element is always inserted at top position.
+ Push function takes one integer value as parameter and inserts that value into the stack.

### Steps for implementing stack of an array
+ Step 1: Check whether stack is FULL. (top == SIZE-1)
+ Step 2: If it is __FULL__, then display "Stack is FULL!!! Insertion is not
possible!!!" and terminate the function.
+ Step 3: If it is __NOT FULL__, then increment top value by one __(top++)__ and set
stack[top] to value __(stack[top] = value)__.
