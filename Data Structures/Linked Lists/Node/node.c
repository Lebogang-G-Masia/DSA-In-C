#include <stdlib.h>
#include <stdio.h>
#include "node.h"

Node* CreateNode(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->next = NULL;
    node->data = data;
    return node;
}

void InsertEnd(Node* head, int data) {
    // printf("Inserting %d at the end\n", data);
    Node* tmp = head;
    while (tmp->next != NULL) tmp = tmp->next;
    tmp->next = CreateNode(data);
}

void InsertBeginning(Node** head, int data) {
    // printf("Inserting %d at the beginning\n", data);
    Node* new = CreateNode(data);
    new->next = *head;
    *head = new;
}

void PrintList(Node* head) {
    Node* x;
    for (x = head; x != NULL; x = x->next) {
        printf("%d ", x->data);
    }
    printf("\n");
}

void ReverseList(Node** head) {
    Node* temp = *head;
    if (temp->next == NULL) return;
    Node* t = temp->next;
    Node* y = NULL;
    temp->next = NULL;
    while (t != NULL) {
        if (t->next != NULL) y = t->next;
        else y = NULL;
        t->next = temp;
        *head = t;
        temp = t;
        t = y;
    }
}
