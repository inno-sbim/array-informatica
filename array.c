#include <stdio.h>

int main() {
    int vote[5];
    int sum = 0;
    int i = 0;
    float avg;

    // Entering marks
    while (i < 5) {
        printf("Enter your vote %d: ", i + 1);
        scanf("%d", &vote[i]);
        sum += vote[i];
        i++;
    }

    // Calculating the average
    avg = (float)sum / 5.0;

    // Printing results
    printf("\nAverage marks: %.2f\n", avg);

    return 0;
}

