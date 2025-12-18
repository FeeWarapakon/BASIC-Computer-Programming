#include <stdio.h>

int main() {
    int number_fee;
    int evenSum_fee = 0;
    int oddSum_fee = 0;

    if (printf("Enter Input : "),
        scanf("%d", &number_fee) != 1) {
        return 1;
    }//end if
    while (number_fee != 0) {
        if (number_fee % 2 == 0) {
            evenSum_fee = evenSum_fee + number_fee;
        } else {
            oddSum_fee = oddSum_fee + number_fee;
        }
        if (scanf("%d", &number_fee) != 1) {
            break;
        }
    }//end while
    printf("Even Sum: %d\n", evenSum_fee);
    printf("Odd Sum: %d\n", oddSum_fee);

    return 0;
}//end function