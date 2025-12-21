#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;

    printf("Enter Input : ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1;
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
        printf("ID: %d, Name: %s, Score: %.2f\n", 
                students[i].studentId, 
                students[i].name, 
                students[i].score);
    }

    free(students);
    return 0;
}//end function 