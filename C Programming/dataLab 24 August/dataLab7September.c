#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;

void insertAtFirst()
{
    int data;
    scanf("%d",&data);

    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}


void insertAnyPosition()
{
    printf("Insert a data inside of a node at any position\n");
    if(head == NULL)
    {
        insertAtFirst();
        return;
    }
    int key;
    printf("Where you want to insert the node\n");
    scanf("%d",&key);
    node *ptr = head;
    while(ptr ->next!=NULL && ptr->data!=key)
    {
        ptr = ptr->next;
    }
    node *newNode;
    newNode = (node*) malloc(sizeof(node));
    int data;
    printf("Enter the data Item\n");
    scanf("%d",&data);
    newNode->data = data;
    newNode->next = ptr->next;
    ptr ->next = newNode;
}

void insertAtLast()
{
    if (head == NULL)
    {
        insertAtFirst();
        return;
    }

    int data;
    scanf("%d",&data);

    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {

    }

}

void print_linked_list()
{
    printf("The Linked List: ");
    node *ptr=head;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void deleteFirst()
{
    printf("Deleting First Node\n");
    node *ptr = head;
    head = ptr ->next;

}

int main()
{
    insertAtFirst();
    insertAnyPosition();
    print_linked_list();
    return 0;
}