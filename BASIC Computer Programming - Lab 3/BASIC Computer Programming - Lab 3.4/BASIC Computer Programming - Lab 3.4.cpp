#include <stdio.h>
#include <stdlib.h>

// 1. ประกาศโครงสร้าง (struct) ตามโจทย์
struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    int passCount = 0;
    int failCount = 0;

    
    printf("Enter Input : ");
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    if (N <= 0) {
        printf("Pass Count: 0\n");
        printf("Fail Count: 0\n");
        return 0;
    }

    struct Student *students = (struct Student *)malloc(N * sizeof(struct Student));
    if (students == NULL) return 1;
    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            free(students);
            return 1;
        }
    }
    for (i = 0; i < N; i++) {
        if (students[i].score >= 60.0) {
            passCount++;
        } else {
            failCount++;
        }
    }
    printf("Pass Count: %d\n", passCount);
    printf("Fail Count: %d\n", failCount);
    free(students);

    return 0;
}//end function