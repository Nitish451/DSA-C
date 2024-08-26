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



// write a program to search an element in an array using  binary search

#include<stdio.h>
int binarysearch(int a[14],int lb, int ub, int item)
{
int mid;
mid=(lb+ub)/2;
if(a[mid==item]){
    return mid;
}
else if(a[mid]<item){
    binarysearch( a, mid+1, ub,  item);
}
else{
      binarysearch( a, mid-1, lb,  item);
}
}
int main(){
    int a[14],lb,ub,item,index,n,i;
    printf("enter the size of array");
    scanf("%d",&n);
      printf(" the element of array is\n");

        printf("enter the element of array");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    printf(" enter the item want to be serached");
    scanf("%d",&item);
    index= binarysearch( a, 0,  n-1,  item);
    printf("%d",index);
    return 0;
}