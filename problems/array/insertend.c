#include<stdio.h>
#include<conio.h>

int insertend(int a[],int data, int n){
printf("enter the element for inserting in end: ");
    scanf("%d",&data);
    printf("element after inserting in end of array: \n");


    // for(int i=0; i<n; i++){
    //     a[i]=a[i+1];
    // }
    a[n]=data;
    n++;
       for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
     return 0;
}


int main(){
    int n,a[40],data;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the data of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("element of array is: ");
      for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    // main logic for inserting in beginig
    insertend( a, data, n);
    return 0;
}