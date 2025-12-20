#include <stdio.h>

int main() {
    int dayCode_fee, hour_fee;

    printf("Enter Input (Day and Hour): ");
    if (scanf("%d %d", &dayCode_fee, &hour_fee) != 2) {
        return 1;
    }
    switch (dayCode_fee) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (hour_fee >= 8 && hour_fee <= 17) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 6:
        case 7:
            printf("Weekend Relax Mode\n");
            break;
        default:
            printf("Invalid Day Code\n");
            break;
    }

    return 0;
}//end function 