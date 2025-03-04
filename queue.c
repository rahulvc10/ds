#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} *Head;

void insert();
void delete();
void display();

int main() {
    Head = (struct node*)malloc(sizeof(struct node)); 
    Head->next = NULL; 
    int choice = 0;
    while (choice != 4) {
        printf("\n******************** main menu ********************\n");
        printf("\n=================================================\n");
        printf("\n1. Insert an element\n2. Delete an element\n3. Display the queue\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter a valid choice\n");
        }
    }
    return 0;
}

void insert() {
    int val;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* y;
    printf("Enter the value: ");
    scanf("%d", &val);
    ptr->data = val;
    ptr->next = NULL;

    if (Head->next == NULL) {
        Head->next = ptr;
    } else {
        y = Head->next;
        while (y->next != NULL) {
            y = y->next;
        }
        y->next = ptr;
        printf("Item inserted\n");
    }
}

void delete() {
    struct node* ptr;
    if (Head->next == NULL) {
        printf("\nUNDERFLOW\n");
        return;
    } else {
        ptr = Head->next;
        Head->next = ptr->next;
        free(ptr);
        printf("Item deleted\n");
    }
}

void display() {
    struct node* y = Head->next; 
    if (y == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("\nHead => ");
    while (y != NULL) {
        printf("%d => ", y->data);
        y = y->next;
    }
    printf("NULL\n");
}

