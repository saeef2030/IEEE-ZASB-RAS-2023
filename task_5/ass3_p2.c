#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct Node* next;
} Node;

void print(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return ;
    }
    printf("Your List is: ");
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insert_node(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void delete_node(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    Node* head = NULL;
    char input;
    int data;
    while (1) {
        printf("Please Enter + to insert a node or - to delete a node or p to print a list  or x to getout: ");
        scanf(" %c", &input);
        switch (input) {
            case '+':
                printf("Plese Enter data to add: ");
                scanf("%d", &data);
                insert_node(&head, data);
                break;
            case '-':
                delete_node(&head);
                break;
            case 'p':
                print(head);
                break;
            case 'x':
                exit(0);
            default:
                printf("Sorry Invalid input\n");
        }
    }
    return 0;
}