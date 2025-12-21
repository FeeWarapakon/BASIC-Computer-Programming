#include <stdio.h>
#include <stdlib.h>

struct Transaction {
    char description[50];
    float amount;
};

int main() {
    int N, i;
    float totalIncome = 0.0;
    float totalExpense = 0.0;
    float netBalance = 0.0;


    printf("Enter Input : ");
    if (scanf("%d", &N) != 1) {
        return 0;
    }
    if (N <= 0) {
        printf("Total Income: 0.00\nTotal Expense: 0.00\nNet Balance: 0.00\n");
        return 0;
    }
    struct Transaction *transactions = (struct Transaction *)malloc(N * sizeof(struct Transaction));
    if (transactions == NULL) return 1;
    for (i = 0; i < N; i++) {
        if (scanf("%f %s", &transactions[i].amount, transactions[i].description) != 2) {
            break;
        }
        if (transactions[i].amount >= 0.0) {
            totalIncome += transactions[i].amount;
        } else {
            totalExpense += (-transactions[i].amount);
        }
    }
    netBalance = totalIncome - totalExpense;
    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);
    free(transactions);

    return 0;
}//end function