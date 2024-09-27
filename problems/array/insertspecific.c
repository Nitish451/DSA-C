#include <stdio.h>
#include <conio.h>
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
    printf("enter the element for inserting : ");
    scanf("%d", &data);
    printf("enter the position");
    scanf("%d", &pos);
    printf("element after inserting in begining of array: ");
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = data;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n\t", a[i]);
    }
    return 0;
}