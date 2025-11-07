#include <stdlib.h>
#include <stdio.h>
#include "node.h"


int main() {
    Node* head = CreateNode(10);
    InsertEnd(head, 15);
    InsertEnd(head, 20);
    InsertEnd(head, 25);
    InsertBeginning(&head, 5);
    InsertBeginning(&head, 0);
    InsertBeginning(&head, -5);
    PrintList(head);
}
