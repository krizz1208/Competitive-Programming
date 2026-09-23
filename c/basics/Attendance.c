#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Enter number of students: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of students must be greater than 0.\n");
        return 0;
    }

    float attendance[N];

    for (int i = 0; i < N; i++) {
        printf("Enter attendance for student %d: ", i + 1);
        scanf("%f", &attendance[i]);

        if (attendance[i] < 0 || attendance[i] > 100) {
            printf("Attendance must be between 0 and 100.\n");
            return 0;
        }
    }

    float threshold = 65.0;
    int lowAttendanceStudents = 0;

    float lowestAttendance = attendance[0];
    int lowestPosition = 1;

    float sum = 0;

    for (int i = 0; i < N; i++) {
        if (attendance[i] < threshold) {
            lowAttendanceStudents++;
        }

        if (attendance[i] < lowestAttendance) {
            lowestAttendance = attendance[i];
            lowestPosition = i + 1;
        }

        sum += attendance[i];
    }

    float average = sum / N;

    printf("Number of students with attendance below %.0f%%: %d\n",
           threshold, lowAttendanceStudents);

    printf("Lowest attendance: %.2f%% (Student %d)\n",
           lowestAttendance, lowestPosition);

    printf("Average attendance: %.2f%%\n", average);

    return 0;
}