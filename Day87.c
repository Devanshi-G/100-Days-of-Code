#include <stdio.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;

//Function to check role
void showMessage(UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Role: ADMIN - Full Access Granted.\n");
            break;
        case USER:
            printf("Role: USER - Limited Access.\n");
            break;
        case GUEST:
            printf("Role: GUEST - Read-Only Access.\n");
            break;
        default:
            printf("Role: UNKNOWN - Access Denied.\n");
    }
}

int main() {
    //Test the roles
    showMessage(ADMIN);
    showMessage(USER);
    showMessage(GUEST);

    return 0;
}