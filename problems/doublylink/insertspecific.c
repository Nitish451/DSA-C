#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} dnd;

dnd insert_specific(dnd *start)
{
    int pos, i;
    dnd *nw, *temp, *temp2;
    temp = start;
    temp2 = start;

    printf("enter the position ");
    scanf("%d", &pos);
    nw = (dnd *)malloc(sizeof(dnd));
    printf("enter the data");
    scanf("%d", &nw->data);

    nw->next = NULL;
    nw->prev = NULL;
    temp = start;
    for (i = 1; i < pos && temp != NULL; i++)
    {
        if (pos == 1)
        {
            nw->next = start;
            start->prev = nw;
            nw->prev = NULL;
            start = nw;
        }
        else
        {
            temp2 = temp;
            temp = temp->next;
        }
    }

    temp2->next = nw;
    nw->prev = temp2;
    temp->prev = nw;
    nw->next = temp;
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
    insert_specific(start);
    display(start);
    return 0;
}
