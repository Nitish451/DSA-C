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
    
    // Inserting a new node at the beginning
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for the new node to insert at the beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = start; // Point new node to the old start
    start = newnode; // Update start to the new node
    
    // Display the updated list
    printf("Linked list contains: \n");
    temp = start;
    while(temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    
    return 0;
}
//function



#include<stdio.h>
 #include<stdlib.h>
 struct node{
    int data;
    struct node *next;
 };
 struct node* insert_beg( struct node *start){
    struct node *newnode,*temp;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("entr the data for new node ");
 scanf("%d",&newnode->data);
 newnode->next=start;
start=newnode;
return (start);
 }
 int main(){
    struct node *newnode,*temp,*start;
    int n,i;
    start=NULL;
    printf("enter no of node you want to create");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for node 1:");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    //printf("data is %d",newnode->data);
    start=newnode;
    temp=start;
    for(i=2; i<=n; i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        //newnode=newnode->next;
        printf("enter the data for node %d :",i);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp->next=newnode;// Link the previous node to the new node
        temp=newnode;// Move temp to the new node
    }
    temp->next=NULL;
    
     //display
    temp=insert_beg( start);
    printf("linklist contain: \n"  );
   while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }


    return 0;
 }