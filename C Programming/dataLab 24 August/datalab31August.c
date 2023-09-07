#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;
node *head = NULL;


// Data add at the first 
void insertAtFirst()
{
    printf("Inserting node at the first position.\n");
    int data;
    printf("Enter the data item:");
    scanf("%d",&data);

    node *newNode;
    newNode = (node *) malloc (sizeof(node));
    newNode ->data =data;
    newNode ->next =head;
    head = newNode;
}


// Data any position



// linked list print function
void printedLinkedList()
{
    printf("The Linked List: ");
    node *p =head;
    while(p!=NULL)
    {
        printf("%d ",p ->data);
        p = p -> next;
    }
    printf("\n");
}

int main()
{
    insertAtFirst();
    printedLinkedList();
    insertAtFirst();
    printedLinkedList();
    insertAtFirst();
    printedLinkedList();
   
    return 0;
}