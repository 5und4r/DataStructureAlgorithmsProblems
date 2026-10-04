#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data; //data
    struct Node * next; // pointer to next node
};

int main()
{
    // variables New nodes
    struct Node *first;
    struct Node *second;
    struct Node *third;

    // current node

    

    // allocating memory for nodes

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    // inserting data
    first->data = 10;
    second->data = 30;
    third->data = 40;

    // links
    first->next = second;
    second->next = third;
    third->next = NULL;
    // current node
    struct Node *current = first;

    while(current != NULL)
    {
        printf(" %d ", current->data);
        current = current->next;
    }
    
    return 0;


}