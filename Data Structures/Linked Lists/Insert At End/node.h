#include <stdlib.h>
#include <stdio.h>


struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* CreateNode(int);
void InsertNode(Node*, int);
void PrintList(Node*);
