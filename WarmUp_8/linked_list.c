#include <stdio.h>
#include <stdlib.h>

//chat-gpt 3.5 was used to understand what struct was and how it works
struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

void push(struct LinkedList* llist, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = llist->head;
    llist->head = new_node;
}

void deleteNode(struct LinkedList* llist, int key) {
    struct Node* temp = llist->head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        llist->head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void printList(struct LinkedList* llist) {
    struct Node* tnode = llist->head;
    while (tnode != NULL) {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
}

int main() {
    struct LinkedList llist;
    llist.head = NULL;

    push(&llist, 7);
    push(&llist, 1);
    push(&llist, 3);
    push(&llist, 2);

    printf("\nCreated Linked list is:\n");
    printList(&llist);

    deleteNode(&llist, 1);

    printf("\nLinked List after Deletion of 1:\n");
    printList(&llist);
    printf("\n");

    return 0;
}
