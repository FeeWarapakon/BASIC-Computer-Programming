#include <stdio.h>

int main() {
    int N, i;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    if (N <= 0) {
        printf("Error\n");
    } 
    else {
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n");
        }
    }

    return 0;
}//end function