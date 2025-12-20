#include <stdio.h>

int main() {
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    for (i = 0; i < N; i++) {
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4) {
            break;
        }

        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;
        int scoreOk = (score >= 50);
        int attendOk = (attendancePercent >= 75.0);

        if (scoreOk && attendOk) {
            printf("Student %d: PASS\n", studentId);
            passCount++;
        } 
        else {
            printf("Student %d: FAIL - ", studentId);
            failCount++;

            if (!scoreOk && !attendOk) {
                printf("Both Score and Attendance\n");
            } 
            else if (!scoreOk) {
                printf("Low Score\n");
            } 
            else {
                printf("Low Attendance (%.2f%%)\n", attendancePercent);
            }
        }
    }
    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);

    return 0;
}//end function