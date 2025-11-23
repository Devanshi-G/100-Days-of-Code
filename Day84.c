#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

//Function to check and print the status
void printMessage(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Result: Operation Successful\n");
            break;
        case FAILURE:
            printf("Result: Operation Failed\n");
            break;
        case TIMEOUT:
            printf("Result: Operation Timed Out\n");
            break;
        default:
            printf("Result: Unknown Status\n");
    }
}

int main() {
    //Test the enum values
    Status currentStatus = SUCCESS;
    printMessage(currentStatus);

    currentStatus = TIMEOUT;
    printMessage(currentStatus);

    currentStatus = FAILURE;
    printMessage(currentStatus);

    return 0;
}