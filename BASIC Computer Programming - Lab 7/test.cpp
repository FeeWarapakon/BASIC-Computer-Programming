#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num1, num2, num3, num4, num5;
    int total_sum;
    int choice;
    char filename[20];

    // 1. ส่วนการเลือกไฟล์ (CLO4: Interaction)
    printf("Select file to read:\n");
    printf("1. input_data1.csv\n");
    printf("2. input_data2.csv\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    // 2. ตรรกะการเลือกชื่อไฟล์ (CLO2: Logic)
    if (choice == 1) {
        sprintf(filename, "input_data1.csv");
    } else if (choice == 2) {
        sprintf(filename, "input_data2.csv");
    } else {
        printf("Invalid choice! Exiting...\n");
        return 1;
    }

    // 3. การเปิดไฟล์ตามชื่อที่เลือก
    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s.\n", filename);
        exit(1);
    }

    // 4. ขั้นตอนการอ่านข้อมูลและคำนวณ (CLO1)
    printf("\n--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", filename);

    if (fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5) == 5) {
        total_sum = num1 + num2 + num3 + num4 + num5;
        printf("File reading complete.\n");
    } else {
        printf("Error: Data format is incorrect.\n");
        fclose(fptr);
        return 1;
    }

    fclose(fptr);

    // 5. รายงานผล (CLO4)
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Filename: %s\n", filename);
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}//end function