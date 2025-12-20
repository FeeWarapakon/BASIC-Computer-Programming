#include <stdio.h>

int main() {
    int clearanceLevel_fee, age_fee, isActive_fee;

    printf("Enter Input: ");
    if (scanf("%d %d %d", &clearanceLevel_fee, &age_fee, &isActive_fee) != 3) {
        return 1;
    }
    if ((clearanceLevel_fee == 3 && isActive_fee == 1) || 
        (clearanceLevel_fee == 2 && age_fee >= 25 && isActive_fee == 1)) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}//end function