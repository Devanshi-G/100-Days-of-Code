//To write a program to search for an elememt in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, searchElement;
    int found = 0; // Flag to indicate if the element is found

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Perform Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1; 
            break;    
        }
    }

    if (found == 1) {
        printf("Element %d found at index %d.\n", searchElement, i);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}