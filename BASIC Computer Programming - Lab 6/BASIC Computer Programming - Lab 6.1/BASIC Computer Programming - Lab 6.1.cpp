#include <stdio.h>

void increase_value(int *number_ptr) {
    if (number_ptr != NULL) {
        *number_ptr = *number_ptr + 10;
    }
}

int main() {
    int data;
    
    printf("Enter initial integer value: ");
    if (scanf("%d", &data) != 1) {
        return 1;
    }

    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", data);
    increase_value(&data);
    printf("2. Value AFTER function call: %d\n", data);

    return 0;
}//end function