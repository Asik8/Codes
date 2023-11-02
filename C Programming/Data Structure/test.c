/*
Next class assessment topics:
Insert at First position
Insert at Any position
Insert at Last position
Delete at First position
Delete at Any position
Delete at Last position
Print function to print all the elements of that node;
*/


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

// void insertAnyPosition()
// {
//     printf("Insert a data inside of a node at any position\n");
//     int data;
//     printf("Enter the data item: ");
//     scanf("%d", &data);

//     node *newNode;
//     newNode = (node *)malloc(sizeof(node));
//     newNode->data = data;

//     int position;
//     printf("Enter the position where you want to insert the node: ");
//     scanf("%d", &position);

//     if (position == 1) {
//         newNode->next = head;
//         head = newNode;
//     } else {
//         node *ptr = head;
//         int currentPos = 1;

//         while (ptr != NULL && currentPos < position - 1) {
//             ptr = ptr->next;
//             currentPos++;
//         }

//         if (ptr == NULL) {
//             printf("Invalid position. Node can't be inserted.\n");
//             free(newNode); // Free the allocated memory since insertion failed.
//             return;
//         }

//         newNode->next = ptr->next;
//         ptr->next = newNode;
//     }
// }


// void insertAtLast()
// {
//     if (head == NULL)
//     {
//         insertAtFirst();
//         return;
//     }

//     int data;
//     scanf("%d",&data);

//     node *newNode;
//     newNode = (node *)malloc(sizeof(node));
//     newNode->data = data;
//     newNode->next = NULL;
// }


void insertAtLast()
{
    if (head == NULL)
    {
        insertAtFirst();
        return;
    }

    int data;
    scanf("%d", &data);

    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
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


// void deleteLast()
// {
//     node *ptr = head;
//     if(ptr->next == NULL)
//     {
//         printf("There is only one node\n");
//         deleteFirst();
//         return;
//     }
//     while(ptr ->next->next != NULL)
//     {
//         ptr = ptr->next;
//     }
//     ptr ->next == NULL;
// }

void deleteLast()
{
    node *ptr = head;
    if (ptr->next == NULL)
    {
        printf("There is only one node\n");
        deleteFirst();
        return;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}



int main()
{
    insertAtFirst();
    insertAnyPosition();
    insertAnyPosition();
    insertAnyPosition();
    insertAtLast();

    print_linked_list();

    deleteFirst();
    print_linked_list();
    
    deleteLast();
    print_linked_list();
    return 0;
}