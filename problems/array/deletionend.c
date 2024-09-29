#include <stdio.h>

void delend(int a[], int *n)
{
(*n)--;
printf("Elements after deletion from the end:\n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int n, a[40];
printf("Enter the size of the array: \n");
    scanf("%d", &n);

    printf("Enter the data of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
delend(a, &n);

    return 0;
}
