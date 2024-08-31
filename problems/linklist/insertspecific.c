#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *newnode, *temp, *start;
    int n, i, pos, newData;
    
    // Creating the initial linked list
    printf("Enter number of nodes you want to create: ");
    scanf("%d", &n);
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for node 1: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    start = newnode;
    temp = start;
    
    for(i = 2; i <= n; i++) {
        newnode->next = (struct node*)malloc(sizeof(struct node));
        newnode = newnode->next;
        printf("Enter the data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = NULL;
    
    // Inserting a new node at a specific position
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for the new node to insert: ");
    scanf("%d", &newnode->data);
    printf("Enter the position where you want to insert the new node: ");
    scanf("%d", &pos);
    
    if (pos == 1) { // Insert at the beginning
        newnode->next = start;
        start = newnode;
    } else {
        temp = start;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of range.\n");
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    
    // Display the updated list
    printf("Linked list contains: \n");
    temp = start;
    while(temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    
    return 0;
}
