
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *delete_beg(nd *start)
{
nd *temp;
printf("linklist after deletion from beg \n");
temp=start;
start=temp->next;
free(temp);
 
   

    return start;
}

void display(nd *start)
{
    nd *temp;
    temp = start;
    printf("linklist contains\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    nd *temp, *start, *nw;
    int i, n;
    printf("enter the size of node");
    scanf("%d", &n);
    nw = (nd *)malloc(sizeof(nd));
    printf("enter the data of node 1:");
    scanf("%d", &nw->data);
    nw->next = NULL;
    start = nw;
    temp = start;
    for (i = 2; i <= n; i++)
    {
        nw = (nd *)malloc(sizeof(nd));
        printf("enter the data for node %d:", i);
        scanf("%d", &nw->data);
        nw->next = NULL;
        temp->next = nw;
        temp = nw;
    }
    temp->next = NULL;
    // display
    //  Insert a new node at the end
    start=delete_beg(start);
    display(start);
    return 0;
}
