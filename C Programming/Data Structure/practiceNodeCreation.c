#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    char Name[100];
    struct node *next;
};

typedef struct node node;
node *head = NULL;

void printFunction(){
    node *current = head;
    while(current != NULL)
    {
        printf("%s-",current->Name);
        printf("%d\n",current->data);
        current = current ->next;
    }
}

int main(void)
{
    node *node1;
    node *node2;
    node1 = (node*) malloc (sizeof(node));
    node2 = (node*) malloc (sizeof(node));

    node1 -> data = 420;
    node2 -> data = 221;

    strcpy(node1 ->Name, "Sadib Gandu");
    strcpy(node2 ->Name, "Al-amin Sandu");

    node1 -> next = node2;
    node2 -> next = NULL;

    head = node1;

    printFunction();
}