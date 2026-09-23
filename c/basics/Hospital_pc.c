#include <stdio.h>

int main() {
    int N;

    printf("Enter number of hours: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of hours must be greater than 0.\n");
        return 0;
    }

    int patients[N];

    for (int i = 0; i < N; i++) {
        printf("Enter patients in hour %d: ", i + 1);
        scanf("%d", &patients[i]);
    }

    int maxPatients = patients[0];
    int maxHour = 1;
    int minPatients = patients[0];

    int sum = 0;

    for (int i = 0; i < N; i++) {
        if (patients[i] > maxPatients) {
            maxPatients = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < minPatients) {
            minPatients = patients[i];
        }

        sum += patients[i];
    }

    int peakHour = maxHour;

    float average = (float)sum / N;

    int aboveAverageHours = 0;

    for (int i = 0; i < N; i++) {
        if (patients[i] > average) {
            aboveAverageHours++;
        }
    }

    printf("Maximum number of patients: %d (Hour %d)\n",
           maxPatients, maxHour);

    printf("Minimum number of patients: %d\n",
           minPatients);

    printf("Peak hour: Hour %d\n",
           peakHour);

    printf("Number of hours above average: %d\n",
           aboveAverageHours);

    return 0;
}