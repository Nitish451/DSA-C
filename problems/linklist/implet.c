
 #include<stdio.h>
 #include<stdlib.h>
 struct node{
    int data;
    struct node *next;
 };
 int main(){
    struct node *newnode,*temp,*start;
    int n,i;
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
    printf("linklist contain: \n");
   
    temp=start;
    while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }


    return 0;
 }
