#include <stdlib.h>
#include <stdio.h>
#include "node.h"

Node* CreateNode(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->next = NULL;
    node->data = data;
    return node;
}

void InsertNode(Node* head, int data) {
    Node* tmp = head;
    while (tmp->next != NULL) tmp = tmp->next;
    tmp->next = CreateNode(data);
}

void PrintList(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
