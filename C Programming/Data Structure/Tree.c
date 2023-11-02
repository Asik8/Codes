#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform an in-order traversal and print the tree
void printTree(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    // In-order
    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);

    // Pre-order
    // printf("%d ", root->data);
    // printTree(root->left);
    // printTree(root->right);

    // Post-order
    // printTree(root->left);
    // printTree(root->right);
    // printf("%d ", root->data);
}

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Print the tree using in-order traversal
    printf("Binary Tree (In-order Traversal): ");
    printTree(root);
    printf("\n");

    return 0;
}