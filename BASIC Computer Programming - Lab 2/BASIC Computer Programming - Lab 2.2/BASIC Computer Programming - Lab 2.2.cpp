#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    for (i = 0; i < N; i++) {
        if (scanf("%f %d", &unitPrice, &quantity) != 2) {
            break;
        }
        if (unitPrice >= 1000.00) {
            itemCost = (unitPrice * 0.90) * quantity;
        } else {
            itemCost = unitPrice * quantity;
        }
        grandTotal += itemCost;
    }
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}//end function