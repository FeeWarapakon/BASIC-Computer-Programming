#include <stdio.h>

int main() {
    int zoneCode_fee;
    float weight_kg_fee;
    float totalCost_fee = 0.0;

    printf("Enter Zone and Weight : ");
    if (scanf("%d %f", &zoneCode_fee, &weight_kg_fee) != 2) {
        return 1;
    }
    switch (zoneCode_fee) {
        case 1:
            if (weight_kg_fee <= 5.0) {
                totalCost_fee = 50.0;
            } else {
                totalCost_fee = 80.0;
            }
            printf("Output: %.2f\n", totalCost_fee);
            break;

        case 2:
            if (weight_kg_fee <= 10.0) {
                totalCost_fee = 150.0;
            } else {
                totalCost_fee = 250.0;
            }
            printf("Output: %.2f\n", totalCost_fee);
            break;

        case 3:
            totalCost_fee = 500.0;
            printf("Output: %.2f\n", totalCost_fee);
            break;

        default:
            printf("Invalid Zone Code\n");
            break;
    }
    return 0;
}//end function