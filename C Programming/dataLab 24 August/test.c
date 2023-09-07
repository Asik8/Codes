#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

node *head=NULL;

void insert_at_first()
{
    printf("Inserting node first position.\n");
    int data;
    printf("Enter the data item:");
    scanf("%d",&data);


    node *new_node;

    new_node;
    new_node= (node *)malloc (sizeof(node));
    new_node->data= data;
    new_node->next=head;
    head=new_node;
}
void insert_at_last()
{
    if(head==NULL)
    {
        insert_at_first();
        return;
    }
    printf("Inserting node at last position.\n");
    int data;
    printf("Enter the data item:");
    scanf("%d",&data);


    node *new_node;

    new_node;
    new_node= (node *)malloc (sizeof(node));
    new_node->data= data;
    new_node->next=NULL;

    node *pre_last=head;
    

    while(pre_last->next != NULL)
    {
        pre_last=pre_last->next;
    }
    pre_last->next=new_node;
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

int main()
{


    insert_at_last();

    print_linked_list();

    return 0;
}