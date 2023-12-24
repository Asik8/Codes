#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;

void insertFirst()
{
    int n;
    scanf("%d",&n);

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void insertLast()
{
    if (head == NULL)
    {
        insertFirst();
        return;
    }

    int n;
    scanf("%d",&n);

    node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = n;
    newNode->next = NULL;
    ptr->next->next = newNode;
}

void insertAnyPosition()
{
    node *ptr = head;

    printf("Insert the key\n");
    int key;
    scanf("%d",&key);

    if (head == NULL)
    {
        printf("You have no node. So insert the first node\n");
        insertFirst();
        return;
    }

    while (ptr->next != NULL && ptr->data != key)
    {
        ptr = ptr->next;
    }

    int n;
    scanf("%d",&n);

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = n;
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void deleteFirst()
{
    node *ptr = head;
    head = ptr->next;
}

void deleteLast()
{
    node *ptr = head;
    if (head == NULL)
    {
        printf("No node in the list");
        return;
    }

    else if (ptr->next == NULL)
    {
        deleteFirst();
        return;
    }

    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = NULL;
}

void printList()
{
    printf("The Linked List: ");
    node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    insertFirst();
    insertFirst();
    printList();
    insertLast();
    printList();
    insertAnyPosition();
    printList();
    deleteFirst();
    printList();
    deleteLast();
    printList();
    deleteAnyPosition();
    // printList();
}