#include <stdlib.h>
#include <stdio.h>
#include "node.h"


int main() {
    Node* head = CreateNode(10);
    InsertNode(head, 12);
    InsertNode(head, 15);
    InsertNode(head, 22);
    PrintList(head);
}
