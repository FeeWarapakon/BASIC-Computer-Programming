#include <stdio.h>

int main() {
    int number_fee;

    printf("Enter a number (1-10): ");
    while (1) { 
        if (scanf("%d", &number_fee) != 1) {
            break;
        }
        if (number_fee >= 1 && number_fee <= 10) {
            printf("Enter a number (1-10): Input accepted : %d\n", number_fee);
            break;
        } else {
            printf("Enter a number (1-10): Error: Value must be 1-10.\n"); 
        }
    }
    return 0;
}//end function