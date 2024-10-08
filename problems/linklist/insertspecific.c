// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// int main() {
//     struct node *newnode, *temp, *start;
//     int n, i, pos, newData;

//     // Creating the initial linked list
//     printf("Enter number of nodes you want to create: ");
//     scanf("%d", &n);

//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("Enter data for node 1: ");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;
//     start = newnode;
//     temp = start;

//     for(i = 2; i <= n; i++) {
//         newnode->next = (struct node*)malloc(sizeof(struct node));
//         newnode = newnode->next;
//         printf("Enter the data for node %d: ", i);
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         temp->next = newnode;
//         temp = newnode;
//     }
//     temp->next = NULL;

//     // Inserting a new node at a specific position
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("Enter data for the new node to insert: ");
//     scanf("%d", &newnode->data);
//     printf("Enter the position where you want to insert the new node: ");
//     scanf("%d", &pos);

//     if (pos == 1) { // Insert at the beginning
//         newnode->next = start;
//         start = newnode;
//     } else {
//         temp = start;
//         for (i = 1; i < pos - 1 && temp != NULL; i++) {
//             temp = temp->next;
//         }
//         if (temp == NULL) {
//             printf("Position out of range.\n");
//         } else {
//             newnode->next = temp->next;
//             temp->next = newnode;
//         }
//     }

//     // Display the updated list
//     printf("Linked list contains: \n");
//     temp = start;
//     while(temp != NULL) {
//         printf(" %d", temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *specific(nd *start)
{
    int i, pos;
    nd *temp, *nw;

    // Allocate memory for the new node
    nw = (nd *)malloc(sizeof(nd));

    printf("Enter the data for the new node: ");
    scanf("%d", &nw->data);

    printf("Enter the position where you want to insert the new node: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        // Insert at the beginning
        nw->next = start;
        start = nw;
    }
    else
    {
        temp = start;
        // Traverse to the position before the desired insertion point
        for (i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        nw->next = temp->next;
        temp->next = nw;
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
    specific(start);
    display(start);
    return 0;
}
