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


// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// struct Node* createNode(int data)
// {
//     struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// void printTree(struct Node* root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     printTree(root->left);
//     printf("%d ", root->data);
//     printTree(root->right);
// }

// int main()
// {
//     struct Node* root = createNode(5);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->right->left = createNode(1);
//     root->right->right = createNode(4);

//     printf("Binary Tree (In-order Traversal): ");
//     printTree(root);
//     printf("\n");

//     return 0;
// }

// #include<stdio.h>
// #include <stdlib.h>
// #include<stdbool.h>
// #define MAX 100
// int intArray[MAX];
// int front = 0;
// int rear = -1;
// int itemCount = 0;
// bool isFull()
// {
//     return itemCount == MAX;
// }

// bool isEmpty()
// {
//     return itemCount == 0;
// }
// int dequeuer()
// {
//     int data = intArray[front++];
//     if (front == MAX)
//     {
//         front = 0;
//     } 
//     itemCount--;
//     return data;
// }
// void enqueuer(int data)
// {
//     if (!isFull())
//     {
//         if (rear == MAX - 1)
//         {
//             rear = -1;
//         }
//         intArray[++rear] = data;
//         itemCount++;
//     }
// }
// int main()
// {
//     enqueuer(8);
//     enqueuer(10);
//     enqueuer(11);
//     enqueuer(15);
//     printf("Queue: ");
//     while (!isEmpty())
//     {
//         int n = dequeuer();
//         printf("%d ", n);
//     }

// }

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *head = NULL;
// typedef struct node node;

// void enqueuer(int data)
// {
//     node *newNode = (node *)malloc(sizeof(node));
//     newNode->data = data;
//     newNode->next = NULL;

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     node *ptr = head;
//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//     }

//     ptr->next = newNode;
// }

// void dequeuer()
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     node *ptr = head;
//     head = ptr->next;
// }

// void print()
// {
//     node *ptr = head;
//     while (ptr != NULL)
//     {
//         printf("%d ",ptr->data);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     enqueuer(8);
//     print();
//     enqueuer(10);
//     print();
//     enqueuer(11);
//     print();
//     enqueuer(15);
//     print();
//     dequeuer();
//     print();
// }