// write a program to search an element in an array using linear search
#include<stdio.h>
int main()
{
    int n,i,arr[53],item;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

       printf(" the element of array is\n");
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
   printf(" enter the item want to be serached");
   scanf("%d",&item);
   for(i=0; i<n; i++)
   {
    if(arr[i]==item)
    {
        printf("index of item will be %d\n",i);
    }
   }
return 0;
}

