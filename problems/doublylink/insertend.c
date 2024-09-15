#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} dnd;

dnd *insert_end(dnd *start)
{
    dnd *nw, *temp;
    nw = (dnd *)malloc(sizeof(dnd));
        printf("enter the data for new node in the end");
    scanf("%d", &nw->data);
    temp=start;
    while(temp->next!=NULL){
        
        temp=temp->next;
    }
    temp->next=nw;
    nw->prev=temp;
    temp=nw;
    temp->next=NULL;

 
    return (start);
}

void display(dnd *start)
{
    dnd *temp = start;
    printf("linklist contain \n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
int main()
{
    dnd *nw, *start, *temp;
    int n, i;
    printf("enter the size of node");
    scanf("%d", &n);
    nw = (dnd *)malloc(sizeof(dnd));
    printf("enter the data for node 1:");
    scanf("%d", &nw->data);
    nw->next = NULL;
    nw->prev = NULL;
    start = nw;
    temp = start;
    for (i = 2; i <= n; i++)
    {
        nw = (dnd *)malloc(sizeof(dnd));
        printf("enter the data for node %d: ", i);
        scanf("%d", &nw->data);
        nw->next = NULL;
        temp->next = nw;
        nw->prev = temp;
        temp = nw;
    }
    temp->next = NULL;
    insert_end(start);
    display(start);

    return 0;
}
