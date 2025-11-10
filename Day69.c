#include <stdio.h>

// Function to Find the Repeated Element
int findRepeatedElement(int arr[], int size) {
    // A helper array to keep track of the numbers we have seen.
    int visited[100] = {0};

    // Loop through the input array exactly once.
    for (int i = 0; i < size; i++) {
        // If visited[arr[i]] is 1, it means we have seen this number before.
        if (visited[arr[i]] == 1) {
            // This is the repeated number, so we return it.
            return arr[i];
        }

        // If we haven't seen this number, mark it as visited by setting its position to 1.
        visited[arr[i]] = 1;
    }

    // Return -1 if no repeated element is found.
    return -1;
}

int main() {
    // Declare an integer array. A size of 100 is chosen as a safe upper limit.
    int inputArray[100];
    int n; // Variable to store the actual number of elements the user wants.
    
    //Get User Input for Array Size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    //Get User Input for Array Elements
    printf("Enter %d integers (ensure exactly one is repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }

    // Call the function to find the repeated element in the user's array.
    int repeatedNum = findRepeatedElement(inputArray, n);
    
    if (repeatedNum != -1) {
        printf("\nThe repeated element is: %d\n", repeatedNum);
    } else {
        printf("No repeated element was found in the input array.\n");
    }
    
    return 0;
}