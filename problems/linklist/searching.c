#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node search(struct node *start){
    int item,pos=1;
    struct node *temp;
    temp=start;
    printf("enter the item wnat to be search ");
    scanf("%d",&item);
    while(temp!=NULL){
        if(temp->data==item){
            printf("position of item is %d",pos);
            break;
        }
      else{
        temp=temp->next;
        pos++;
      }
    }
}

// Function to display the linked list
void display(struct node *start) {
    struct node *temp = start;
    printf("Linked list contains: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
        newnode->next=(struct node*)malloc(sizeof(struct node));
        newnode=newnode->next;
        printf("enter the data for node %d :",i);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp->next=newnode;
        temp=newnode;
    }
    temp->next=NULL;
     //display
   display(start);
   //search
    search(start);


    return 0;
 }
