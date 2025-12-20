#include <stdio.h>

int main() {
    int customerType_fee;
    float consumption_kWh_fee;
    float totalBill_fee = 0.0;

    printf("Enter Input: ");
    if (scanf("%d %f", &customerType_fee, &consumption_kWh_fee) != 2) {
        return 1;
    }
    if (customerType_fee == 1) {
        if (consumption_kWh_fee <= 100) {
            totalBill_fee = consumption_kWh_fee * 3.0;
        } else {
            totalBill_fee = consumption_kWh_fee * 4.0;
        }
        printf("Output: %.2f\n", totalBill_fee);
    } 
    else if (customerType_fee == 2) {
        if (consumption_kWh_fee <= 500) {
            totalBill_fee = consumption_kWh_fee * 5.0;
        } else {
            totalBill_fee = consumption_kWh_fee * 6.5;
        }
        printf("%.2f\n", totalBill_fee);
    } 
    else {
        printf("Invalid Customer Type\n");
    }

    return 0;
}//end function