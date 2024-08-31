#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *newnode, *temp, *start;
    int n, i, newData;
    
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
    
    // Inserting a new node at the end
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for the new node to insert at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL; // New node will be the last one
    
    temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode; // Update the last node's next pointer
    
    // Display the updated list
    printf("Linked list contains: \n");
    temp = start;
    while(temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    
    return 0;
}
