#include <stdio.h>

int main() {
    // Define the number of groups and their corresponding star counts
    const int total_groups = 5;
    int star_group_sizes[total_groups];

    // Generate the star pattern: 1, 3, 5, 3, 1
    int middle_index = total_groups / 2;
    for (int i = 0; i < total_groups; i++) {
        if (i <= middle_index) {
            star_group_sizes[i] = 1 + 2 * i;  // 1, 3, 5
        } else {
            star_group_sizes[i] = star_group_sizes[total_groups - i - 1];  // Mirror the pattern
        }
    }

    // Print the vertical pattern
    for (int group = 0; group < total_groups; group++) {
        for (int star = 0; star < star_group_sizes[group]; star++) {
            printf("*\n");
        }

        // Print a blank line between groups (except after the last one)
        if (group < total_groups - 1) {
            printf("\n");
        }
    }

    return 0;
}