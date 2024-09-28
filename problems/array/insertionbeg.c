#include <stdio.h>
#include <conio.h>

int insertbeg(int a[],int data,int n){
      printf("enter the element for inserting in begining: ");
    scanf("%d", &data);
    printf("element after inserting in begining of array: \2");

    
    for (int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = data;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}




int main()
{
    int n, a[40], data;
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
  insertbeg( a, data,n);
    return 0;
}