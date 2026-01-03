#include <stdio.h>

int main() {
    int votes[5];
    int sum = 0;
    int i = 0;
    float avg;

    // Entering marks
    while (i < 5) {
        printf("Enter your vote %d: ", i + 1);
        scanf("%d", &votes[i]);
        sum += votes[i];
        i++;
    }

    // Calculating the average
    avg = sum / 5.0;

    // Printing results
    printf("\nAverage marks: %.2f\n", avg);

    return 0;
}
