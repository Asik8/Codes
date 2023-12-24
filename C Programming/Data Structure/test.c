#include <stdio.h>
#include <stdlib.h>

struct Asik
{
    int a;
    float b;
    struct Asik *next;
};

typedef struct Asik asik;
asik *head = NULL;

int cycle(asik *head)
{
    asik *first = head;
    asik *second = head;

    while (second != NULL && second->next != NULL)
    {
        first = first->next;
        second = second->next->next;

        if (first == second)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    asik *newNode = (asik *)malloc(sizeof(asik));
    asik *newNode2 = (asik *)malloc(sizeof(asik));
    asik *newNode3 = (asik *)malloc(sizeof(asik));
    newNode->a = 2;
    newNode->b = 1.5;
    newNode->next = newNode2;
    head = newNode;

    newNode2->a = 4;
    newNode2->b = 2.5;
    newNode2->next = newNode3;

    newNode3->a = 6;
    newNode3->b = 3.0;
    newNode3->next = newNode;

    int cont = cycle(head);

    if (cont)
    {
        printf("This code has a cycle.\n");
    }
    else
    {
        printf("There is no cycle.\n");
    }

    printf("The Linked List: ");
    asik *ptr = head;
    int c = 0;

    while (ptr != NULL)
    {
        c++;
        if (c == 4)
        {
            break;
        }
        printf("%d ", ptr->a);
        printf("%0.1f ", ptr->b);
        printf("\n");

        ptr = ptr->next;
    }

    return 0;
}
