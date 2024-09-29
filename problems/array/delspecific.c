#include <stdio.h>

void delSpecific(int a[], int *n, int element) {
   
    for (int i = 0; i < *n; i++) {
        if (a[i] == element) {
       
            // Shift elements to the left
            for (int j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--; // Decrease the size
        } 
       
    }

   
        printf("Elements after deletion of %d:\n", element);
        for (int i = 0; i < *n; i++) {
            printf("%d\n", a[i]);
        }
    
}

int main() {
    int n, a[40], element;

    // Input size of the array
    printf("Enter the size of the array (max 40): \n");
    scanf("%d", &n);
    if (n <= 0 || n > 40) {
        printf("Invalid size. Please enter a number between 1 and 40.\n");
        return 1; // Exit with error code
    }

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print the elements of the array
    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    // Input the specific element to delete
    printf("Enter the element to delete: \n");
    scanf("%d", &element);

    // Delete the specified element
    delSpecific(a, &n, element);

    return 0;
}
