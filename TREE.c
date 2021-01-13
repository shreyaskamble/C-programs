#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};

struct node *root = NULL;

void insert(int data)
{
    struct node *tempNode = (struct node*)
    malloc(sizeof(struct node));
    struct node *current;
    struct node *parent;

    tempNode->data = data;
    tempNode->leftchild = NULL;
    tempNode->rightchild = NULL;

    //if tree is empty
    if (root == NULL)
    {
        root = tempNode;
    }
    else
    {
        current = root;
        parent = NULL;

        while (1)
        {
            parent = current;

            //go to left of the tree 
            if(data < parent->data)
            {
                current = current->leftchild;

                //insert to the left
                if (current == NULL)
                {
                    parent->leftchild = tempNode;
                    
                }
            } //go to right of the tree
            else
            {
                current = current->rightchild;

                //insert to the right
                if (current == NULL)
                {
                    parent->rightchild= tempNode;
                }
            }
        }
    }
}

struct node* search(int data)
{
    struct node *current = root;
    printf("Visiting elements : ");

    while (current->data != data)
    
     if (current != NULL)
      {
           printf("%d",current->data);
      }
       //go to left tree
       if (current->data > data)
       {
           current = current->leftchild;
       }
    
    //else go to right tree
    else
    {
        current = current->rightchild;
    }
    
    //not found
    if (current == NULL)
    {
        return NULL;
    }
    return current;
}

void main()
{
    int i;
    int array[7] = { 27, 14, 35, 10, 19, 31, 42};
    struct node * temp ;
    for ( i = 0; i < 7; i++)
     insert(array[i]);

        i = 35;
        temp = search(i);

        if (temp != NULL)
        {
            printf("[%d] Element found.", temp->data);
            printf("\n");
        }
        else
        {
            printf("[x] Element not found (%d). \n", i );
        }

        i = 15;
        temp = search(i);

        if (temp != NULL)
        {
             printf("[%d] Element found.", temp->data);
            printf("\n");
        }
        else
        {
            printf("[ x ] Element not found (%d).\n",i);
        }
     
}