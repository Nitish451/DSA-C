#include <stdio.h>

void delend(int a[], int *n) {
    if (*n <= 0) {
        printf("Array is empty. Cannot delete element from the end.\n");
        return;
    }

    // Decrease the size of the array
    (*n)--;

    // Print the elements after deletion
    printf("Elements after deletion from the end:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d\n", a[i]);
    }
}

int main() {
    int n, a[40];

    // Input size of the array
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter the data of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print the elements of the array
    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    // Delete an element from the end
    delend(a, &n);

    return 0;
}
