#include <stdio.h>
#include <stdlib.h>

//Declaration
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main(){
    
    //Initialization
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    //Alocation of memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    //Adding data to the structure
    one -> data = 5;
    two -> data = 7;
    three -> data = 8;

    //Connecting linkes 
    head = one;
    one -> prev = NULL;
    one -> next = two;

    two -> prev = one;
    two -> next = three;

    three -> prev = two;
    three -> next = NULL;

    //Displaying the data
    while (head != NULL)
    {   
        printf("%d -> ", head -> data);
        head = head -> next;
    }
    
    return 0;
}
