#include <stdio.h>

int main() {
    int planCode_fee;
    float dataUsage_GB_fee;
    float totalBill_fee = 0.0;

    printf("Enter Input: ");
    if (scanf("%d %f", &planCode_fee, &dataUsage_GB_fee) != 2) {
        return 1;
    }
    if (planCode_fee == 1) {
        if (dataUsage_GB_fee <= 10.0) {
            totalBill_fee = 299.0;
        } else {
            totalBill_fee = 299.0 + (10.0 * (dataUsage_GB_fee - 10.0));
        }
        printf("Output: %.2f\n", totalBill_fee);
    } 
    else if (planCode_fee == 2) {
        if (dataUsage_GB_fee <= 20.0) {
            totalBill_fee = 599.0;
        } else {
            totalBill_fee = 599.0 + 50.0 + (5.0 * (dataUsage_GB_fee - 20.0));
        }
        printf("Output: %.2f\n", totalBill_fee);
    } 
    else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}//end function