
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *delete_end(nd *start)
{
    nd *temp, *temp2;
    temp = start;
    temp2 = start;
    printf("linklist after deletion from end\n");
    if (start == NULL)
    {
        printf("node is already empty");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
    }

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
    delete_end(start);
    display(start);
    return 0;
}
