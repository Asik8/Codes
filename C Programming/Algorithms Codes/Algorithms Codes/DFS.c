#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure to represent a node in the adjacency list
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent the graph
struct Graph {
    int numVertices;
    struct Node** adjList;
    bool* visited;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with a given number of vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->adjList = (struct Node**)malloc(numVertices * sizeof(struct Node*));
    graph->visited = (bool*)malloc(numVertices * sizeof(bool));

    for (int i = 0; i < numVertices; ++i) {
        graph->adjList[i] = NULL;
        graph->visited[i] = false;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

// Function to perform DFS traversal from a given vertex
void DFS(struct Graph* graph, int v) {
    // Mark the current node as visited
    graph->visited[v] = true;
    printf("%d ", v);

    // Traverse all adjacent vertices
    struct Node* temp = graph->adjList[v];
    while (temp != NULL) {
        int adjVertex = temp->data;
        if (!graph->visited[adjVertex])
            DFS(graph, adjVertex);
        temp = temp->next;
    }
}

// Driver code
int main() {
    // Create a graph given in the above diagram
    struct Graph* g = createGraph(4);
    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 1, 2);
    addEdge(g, 2, 0);
    addEdge(g, 2, 3);
    addEdge(g, 3, 3);

    printf("Following is Depth First Traversal (starting from vertex 2):\n");

    // Perform DFS traversal
    DFS(g, 2);

    // Free allocated memory
    free(g->visited);
    for (int i = 0; i < g->numVertices; ++i) {
        struct Node* temp = g->adjList[i];
        while (temp != NULL) {
            struct Node* next = temp->next;
            free(temp);
            temp = next;
        }
    }
    free(g->adjList);
    free(g);

    return 0;
}
