#include <stdio.h>

int main() {
    int score_fee;
    if (scanf("%d", &score_fee) != 1) {
        return 1;
    }
    if (score_fee >= 80) {
        printf("Grade A\n");
    } 
    else if (score_fee >= 70) {
        printf("Grade B\n");
    } 
    else if (score_fee >= 60) {
        printf("Grade C\n");
    } 
    else if (score_fee >= 50) {
        printf("Grade D\n");
    } 
    else {
        printf("Grade F\n");
    }

    return 0;
}//end fuction