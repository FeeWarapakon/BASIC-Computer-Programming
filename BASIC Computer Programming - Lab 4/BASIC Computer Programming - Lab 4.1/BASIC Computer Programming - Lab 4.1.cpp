#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;

    printf("Enterr Input : ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1;
    }
    int *scores = (int *)malloc(N * sizeof(int));
    if (scores == NULL) {
        return 1;
    }
    for (i = 0; i < N; i++) {
        if (scanf("%d", &scores[i]) != 1) {
            return 1;
        }
    } 
    for (i = N - 1; i >= 0; i--) {
        printf("Output : %d\n", scores[i]); 
    }
    free(scores);

    return 0;
}//end function