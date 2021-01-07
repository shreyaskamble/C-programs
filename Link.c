// Linked list implementation in c

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Creating a node 
struct node 
{
    int value ;
    struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *P)
{
    while (P != NULL)
    {
        printf("%d", P->value);
        P = P->next;
    }
}

void main()
{
    // Initialize nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Assign value values
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value 
    head = one;
    printLinkedlist(head);
}