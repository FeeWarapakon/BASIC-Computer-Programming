#include <stdio.h>

int main() {
    int categoryCode_fee;
    float price_before_vat_fee;
    float totalBill_fee = 0.0;
    float vatAmount_fee = 0.0;

    printf("Enter Input: ");
    if (scanf("%f %d", &price_before_vat_fee, &categoryCode_fee) != 2) {
        return 1;
    }
    if (categoryCode_fee == 1) {
        totalBill_fee = price_before_vat_fee * 1.07;
    } 
    else if (categoryCode_fee == 2) {
        totalBill_fee = price_before_vat_fee;
    } 
    else if (categoryCode_fee == 3) {
        totalBill_fee = price_before_vat_fee * 1.15;
    } 
    else {
        printf("Invalid Category\n");
        return 0;
    }
    vatAmount_fee = totalBill_fee - price_before_vat_fee;
    printf("VAT Amount: %.2f\n", vatAmount_fee);
    printf("Total Price: %.2f\n", totalBill_fee);

    return 0;
}//end function