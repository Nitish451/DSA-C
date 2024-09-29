#include <stdio.h>
#include <conio.h>

int insertspecific(int a[],int n, int data ,int pos){
  printf("enter the element for inserting : ");
    scanf("%d", &data);
    printf("enter the position");
    scanf("%d", &pos);
    printf("element after inserting in begining of array: \n");


    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];  //shifting right 
    }
    a[pos - 1] = data;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
     return 0;
}


int main()
{
    int n, a[40], data, pos;
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("enter the data of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    // main logic for inserting in beginig
  insertspecific( a, n,  data , pos);
    return 0;
}