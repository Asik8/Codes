#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNewNode(int data)
{
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void PrintTree(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    // In Order
    PrintTree(root->left);
    printf("%d ",root->data);
    PrintTree(root->right);

    // Pre Order 
    // printf("%d ",root->data);
    // PrintTree(root->left);
    // PrintTree(root->right);

    // Post Order 
    // PrintTree(root->left);
    // PrintTree(root->right);
    // printf("%d ",root->data);
}

int main()
{
    struct Node* root = createNewNode(5);
    root->left = createNewNode(2);
    root ->left->left = createNewNode(3);
    root ->left->right = createNewNode(9);
    root->right = createNewNode(7);
    root->right->right = createNewNode(1);
    root->right->right->right = createNewNode(4);

    printf("Created Link List is:\n");
    PrintTree(root);
    printf("\n");
}