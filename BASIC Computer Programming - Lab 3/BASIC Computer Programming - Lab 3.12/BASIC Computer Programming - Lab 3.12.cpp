#include <stdio.h>
#define WORTH_THRESHOLD 150.0
#define ATTACK_MULTIPLIER 10.0
#define REDUCTION_LOW 0.20
#define REDUCTION_HIGH 0.40

int main() {
    int nCalculations, i;
    int attkLvl, oppLvl, oppArmor;
    float baseAttack, damageReduction, netDamage, damageDeficit;

    printf("Enter Input : ");
    if (scanf("%d", &nCalculations) != 1) {
        return 1;
    }

    for (i = 0; i < nCalculations; i++) {
        if (scanf("%d %d %d", &attkLvl, &oppLvl, &oppArmor) != 3) {
            break;
        }
        baseAttack = attkLvl * ATTACK_MULTIPLIER;
        if (oppArmor < 50) {
            damageReduction = REDUCTION_LOW;
        } else {
            damageReduction = REDUCTION_HIGH;
        }
        netDamage = baseAttack * (1.0 - damageReduction);
        if (netDamage >= WORTH_THRESHOLD) {
            printf("SUCCESS! Net Damage: %.2f\n", netDamage);
        } else {
            damageDeficit = WORTH_THRESHOLD - netDamage;
            printf("FAIL. Deficit: %.2f\n", damageDeficit);
        }
    }

    return 0;
}//end function