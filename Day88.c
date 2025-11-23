#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    STATUS_COUNT // This effectively equals 3, the size of the enum
} Status;

//Create a string array that matches the Enum order
const char* statusNames[] = {
    "SUCCESS",
    "FAILURE",
    "TIMEOUT"
};

int main() {
    int i;

    //Loop from 0 up to STATUS_COUNT
    for (i = 0; i < STATUS_COUNT; i++) {
        printf("Value: %d, Name: %s\n", i, statusNames[i]);
    }

    return 0;
}