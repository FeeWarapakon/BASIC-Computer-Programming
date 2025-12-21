#include <stdio.h>
#include <stdlib.h>

#define SHIPPING_FEE 50.0

struct Order {
    int itemId;
    float unitPrice;
    int quantity;
};

int main() {
    int N, i;
    float grandTotal = 0.0;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 0;
    }
    struct Order *orders = (struct Order *)malloc(N * sizeof(struct Order));
    if (orders == NULL) return 1;
    for (i = 0; i < N; i++) {
        float itemTotal;
        if (scanf("%d %f %d", &orders[i].itemId, &orders[i].unitPrice, &orders[i].quantity) != 3) {
            break;
        }
        itemTotal = (orders[i].unitPrice * orders[i].quantity) + SHIPPING_FEE;
        if (itemTotal >= 500.0) {
            itemTotal = itemTotal * 0.90;
        }
        grandTotal += itemTotal;
    }
    printf("Grand Total: %.2f\n", grandTotal);
    free(orders);
    return 0;
}//end function