#include <stdio.h>

int main() {
    int N_fee; 
    int sum_fee = 0; 
    int i_fee;

    if (printf("Enter Input : "),
        scanf("%d", &N_fee) != 1) {
        return 1;
    }//end if
    for (i_fee = 1; i_fee <= N_fee; i_fee++) {
        sum_fee = sum_fee + i_fee;
    }//end for
    printf("Output : %d\n", sum_fee);

    return 0;
}//end function