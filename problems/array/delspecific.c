#include <stdio.h>

void delSpecific(int a[], int *n, int element) {
    int found = 0; // Flag to check if the element is found
    for (int i = 0; i < *n; i++) {
        if (a[i] == element) {
            found = 1; // Element found
            // Shift elements to the left
            for (int j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--; // Decrease the size
            break; // Exit the loop after deletion
        }
    }

    if (found) {
        printf("Elements after deletion of %d:\n", element);
        for (int i = 0; i < *n; i++) {
            printf("%d\n", a[i]);
        }
    } else {
        printf("Element %d not found in the array.\n", element);
    }
}

int main() {
    int n, a[40], element;

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

    // Input the specific element to delete
    printf("Enter the element to delete: \n");
    scanf("%d", &element);

    // Delete the specified element
    delSpecific(a, &n, element);

    return 0;
}
