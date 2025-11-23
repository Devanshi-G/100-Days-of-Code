#include <stdio.h>

typedef enum {
    SUCCESS = 10,
    FAILURE,       // Automatically becomes 11
    TIMEOUT        // Automatically becomes 12
} Status;

void checkStatus(Status s) {
    printf("Value %d: ", s);
    
    switch (s) {
        case SUCCESS:
            printf("Result is SUCCESS\n");
            break;
        case FAILURE:
            printf("Result is FAILURE\n");
            break;
        case TIMEOUT:
            printf("Result is TIMEOUT\n");
            break;
    }
}

int main() {
    checkStatus(SUCCESS);
    checkStatus(FAILURE);
    checkStatus(TIMEOUT);

    return 0;
}