#include <stdio.h>
#include <stdlib.h>

// Declaration of struct
struct node {
    int data;
    struct node *next;
};

int main(){

    //Initialization
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    //Allocation of memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    //Adding data to the structure
    one -> data = 1;
    two -> data = 2;
    three -> data = 3;

    //Connecting the links
    head =  one;
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    //displaying the data
    while (head != NULL)
    {
        printf("%d -> ", head -> data);
        head = head -> next;
    }
    

    return 0;
}