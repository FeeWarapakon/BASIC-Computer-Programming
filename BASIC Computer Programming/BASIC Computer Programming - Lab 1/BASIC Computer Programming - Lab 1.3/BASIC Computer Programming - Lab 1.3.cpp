#include <stdio.h>

int main() {
    int num1_fee, num2_fee, operationCode_fee, result_fee;

    if (printf("Enter Input : "),
        scanf("%d %d %d", &num1_fee, &num2_fee, &operationCode_fee) != 3) {
        return 1;
    }//end if
    switch (operationCode_fee) {
        case 1:
            result_fee = num1_fee + num2_fee;
            printf("%d\n", result_fee);
            break;
        case 2:
            result_fee = num1_fee - num2_fee;
            printf("%d\n", result_fee);
            break;
        case 3:
            result_fee = num1_fee * num2_fee;
            printf("%d\n", result_fee);
            break;
        case 4:
            result_fee = num1_fee / num2_fee;
            printf("%d\n", result_fee);
            break;
        default:
            printf("Invalid Operation\n");
            break;
    }//end switch

    return 0;
}//end function