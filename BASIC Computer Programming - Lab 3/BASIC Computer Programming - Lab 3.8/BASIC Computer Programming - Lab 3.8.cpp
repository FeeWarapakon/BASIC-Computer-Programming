#include <stdio.h>
#define MAX_N 100 

struct Campaign {
    char name[50];
    float productPrice;
    int salesCount;
    float adSpend;
};

int main() {
    int N, i;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1 || N <= 0 || N > MAX_N) {
        return 0; 
    }
    struct Campaign campaigns[MAX_N];

    for (i = 0; i < N; i++) {
        if (scanf("%s %f %d %f", 
                  campaigns[i].name, 
                  &campaigns[i].productPrice, 
                  &campaigns[i].salesCount, 
                  &campaigns[i].adSpend) != 4) {
            break;
        }

        float totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice;
        float rate = (campaigns[i].salesCount >= 20) ? 0.20f : 
                     (campaigns[i].salesCount >= 10) ? 0.15f : 0.10f;
        float totalCommission = totalRevenue * rate;
        float netProfitLoss = totalCommission - campaigns[i].adSpend;

        printf("--- Campaign: %s ---\n", campaigns[i].name);
        printf("Sales: %d, Ad Spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adSpend);
        printf("Rate Used: %.0f%%\n", rate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n", 
               totalRevenue, rate * 100, campaigns[i].adSpend, netProfitLoss);
        
        printf("Net Result: %.2f\n", netProfitLoss);
    }

    return 0;
}//end function