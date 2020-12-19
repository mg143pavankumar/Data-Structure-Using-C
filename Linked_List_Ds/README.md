# Linked List 
+ When we want to work with unknown number of data values, we use a linked list data structure to organize the data.
+ Linked list is a linear data structure that contains sequence of elements such that each elements links to its next element in the sequence.
+ Each element in a linked list is called as **"Node"**


# Single Linked list 
+ Single linked list is a sequence of elements in which every elements has link to its next element in the sequence.
+ In any single linked list, the individual element is called as **"Node"**.
+ Every "Node" contains two fields, **data** and **next**.
+ The **data** field is used to store actual value of the node. 
+ The **next** field is used to store the address of the next node in the sequence.

## Graphical representation
![image](https://user-images.githubusercontent.com/68140538/102629038-a082c780-4170-11eb-8179-7b316d2bf5be.png)

+ In a single linked list, the address of the first field is always stored in a reference node know as __"front"__ or __"root"__.
+ Always next part (reference part) of the last node must be NULL.

![image](https://user-images.githubusercontent.com/68140538/102630188-3e2ac680-4172-11eb-9e5f-c24e0487a4f0.png)


# Double Linked List:
+ Double linked list is a sequence of elements in which every element has links to its
previous element and next element in the sequence.
+ In double linked list, every node has link to its previous node and next node.
+ so, we can __traverse forward__ by using __next__ field and can __traverse backward__ by using __previous__ field. 
+ Every node in a double linked list contains __three fields__.

## Graphical representation
![image](https://user-images.githubusercontent.com/68140538/102698242-fb481c00-4261-11eb-8ca1-380f8b547d52.png)

+ 'link1' field is used to store the address of the previous node in the sequence.
+ 'link2' field is used to store the address of the next node in the sequence
+ 'data' field is used to store the actual value of that node.

![image](https://user-images.githubusercontent.com/68140538/102698245-013dfd00-4262-11eb-9b5f-c9502b38bfb3.png)


# Circular Linked List:
+ Circular linked list is a sequence of elements in which every element has link to its next element in the 
sequence and the last element has a link to the first element in the sequence.

![image](https://user-images.githubusercontent.com/68140538/102698258-17e45400-4262-11eb-9587-cb481ebaa37b.png)
