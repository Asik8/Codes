// Link List Insertion for simply Linked List 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int date;
    struct Node *next;
};

typedef struct Node node;
node *head=NULL;

void printLinedList(node *head)
{
    while(head!=NULL)
    {
        printf("%d\n", head->date);
        head = head->next;
    }
}

int main()
{   node *head = NULL;
    node *firstNode;
    node *secondNode;

    firstNode = (node *) malloc(sizeof(node));
    secondNode = (node *) malloc(sizeof(node));

    firstNode -> date = 10;
    firstNode -> next = secondNode;
    

    secondNode -> date = 4976;
    secondNode -> next = NULL;

    head = firstNode;

    printLinedList(head);


    // printf("%d\n",firstNode ->date);
    // printf("%d\n",firstNode ->next);
    
    // printf("%d\n",secondNode ->date);
    // printf("%d\n",secondNode ->next);

    return 0;
}