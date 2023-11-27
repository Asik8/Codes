#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MinHeap {
    char data;
    unsigned freq;
    struct MinHeap *left, *right;
};

struct Compare {
    int (*compareFunction)(const struct MinHeap *, const struct MinHeap *);

    // Constructor to initialize the function pointer
    Compare(int (*compare)(const struct MinHeap *, const struct MinHeap *)) {
        compareFunction = compare;
    }
};

int compareMinHeap(const struct MinHeap *l, const struct MinHeap *r) {
    return (l->freq > r->freq);
}

struct MinHeap *newMinHeapNode(char data, unsigned freq) {
    struct MinHeap *temp = (struct MinHeap *)malloc(sizeof(struct MinHeap));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}

void printCodes(struct MinHeap *root, char *str, int top) {
    if (!root)
        return;

    if (root->data != '$') {
        printf("%c: %s\n", root->data, str);
    }

    str[top] = '0';
    printCodes(root->left, str, top + 1);
    str[top] = '1';
    printCodes(root->right, str, top + 1);
}

void HuffmanCodes(char data[], int freq[], int size) {
    struct MinHeap *left, *right, *top;

    struct MinHeap **minHeapArray = (struct MinHeap **)malloc(size * sizeof(struct MinHeap *));

    for (int i = 0; i < size; ++i) {
        minHeapArray[i] = newMinHeapNode(data[i], freq[i]);
    }

    struct Compare compare(&compareMinHeap);
    int heapSize = size;

    while (heapSize != 1) {
        left = minHeapArray[0];
        minHeapArray[0] = minHeapArray[heapSize - 1];
        --heapSize;

        right = minHeapArray[0];
        --heapSize;

        top = newMinHeapNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;

        minHeapArray[heapSize] = top;
    }

    char str[size];
    printCodes(minHeapArray[0], str, 0);

    free(minHeapArray);
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    HuffmanCodes(arr, freq, size);

    return 0;
}
