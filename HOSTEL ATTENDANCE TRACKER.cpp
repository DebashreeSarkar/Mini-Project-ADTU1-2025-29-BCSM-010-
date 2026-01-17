
#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int totalPresent[10] = {0};
    int highestAttendance = 0;
    int studentWithHighest = 0;

    for (i = 0; i < 10; i++) {
        int sum = 0;
        for (j = 0; j < 7; j++) {
            sum += A[i][j];
        }
        totalPresent[i] = sum;

        if (sum > highestAttendance) {
            highestAttendance = sum;
            studentWithHighest = i;
        }
    }

    int lowestAttendance = 11;
    int dayWithLowest = 0;

    for (j = 0; j < 7; j++) {
        int daySum = 0;
        for (i = 0; i < 10; i++) {
            daySum += A[i][j];
        }
        if (daySum < lowestAttendance) {
            lowestAttendance = daySum;
            dayWithLowest = j;
        }
    }

    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, totalPresent[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", studentWithHighest + 1, highestAttendance);
    printf("\nDay with Lowest Overall Attendance: Day %d\n", dayWithLowest + 1);

    return 0;
}

