#include <stdio.h>
#include <ctype.h>

int main() {
    char text[101];
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int countOther = 0;
    int i;

    printf("Enter Input : ");
    if (scanf("%s", text) != 1) {
        return 1;
    }
    for (i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        if (ch >= 'A' && ch <= 'Z') {
            countUpper++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            countLower++;
        } 
        else if (ch >= '0' && ch <= '9') {
            countDigit++;
        } 
        else {
            countOther++;
        }
    }
    printf("Uppercase: %d\n", countUpper);
    printf("Lowercase: %d\n", countLower);
    printf("Digits: %d\n", countDigit);
    printf("Special/Other: %d\n", countOther);

    return 0;
}//end function