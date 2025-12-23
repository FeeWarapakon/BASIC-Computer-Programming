#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    int passSum = 0;
    int failCount = 0;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1 || N < 0) {
        return 1;
    }

    int *scores = (int *)malloc(N * sizeof(int));
    if (scores == NULL && N > 0) {
        return 1; 
    }
    for (i = 0; i < N; i++) {
        if (scanf("%d", &scores[i]) != 1) {
            free(scores);
            return 1;
        }
        if (scores[i] >= 50) {
            passSum += scores[i];
        } else {
            failCount++;
        }
    }
    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);
    free(scores);
    
    return 0;
}//end function