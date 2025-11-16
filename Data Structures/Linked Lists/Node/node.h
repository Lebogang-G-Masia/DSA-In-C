#include <stdlib.h>
#include <stdio.h>


struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* CreateNode(int);
void InsertEnd(Node*, int);
void InsertBeginning(Node**, int);
void PrintList(Node*);
void ReverseList(Node**);
