#include <stdio.h>

int main() {
    int N_fee, i_fee;

    if (scanf("%d", &N_fee) != 1) {
        return 1;
    }

    if (N_fee <= 0) {
        printf("Error\n");
    } else {
    
        for (i_fee = 0; i_fee < N_fee; i_fee++) {
            printf("Hello Loop!\n");
        }
    }
    return 0;
}//end function