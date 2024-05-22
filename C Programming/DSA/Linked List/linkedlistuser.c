#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node* inputLinkedList() {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int data;
    char choice;

    do {
        printf("Enter data: ");
        scanf("%d", &data);

        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return head;
}

int main() {
    struct Node* head = NULL;

    head = inputLinkedList();

    printf("Linked List: ");
    display(head);

    // TODO: Remember to free the allocated memory for the linked list nodes

    return 0;
}
