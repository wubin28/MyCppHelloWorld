#include<stdio.h>

int main() {
    int n, num = 0;
    printf("Please enter an integer between 1 and 99999: ");
    scanf_s("%d", &n);

    if (n <= 0 || n > 99999) {
        printf("Invalid input. Please enter an integer between 1 and 99999.\n");
        return 1; // Exiting the program if the input is not valid
    }

    int temp = n; // Temporary variable to store the original number

    // Counting the number of digits
    while (temp) {
        temp /= 10;
        num++;
    }

    printf("Number of digits is %d\n", num);

    printf("The digits of the integer from high to low are:\n");

    int divisor = 1;
    for (int i = 1; i < num; i++) {
        divisor *= 10;
    }

    while (divisor) {
        printf("%d ", n / divisor);
        n %= divisor;
        divisor /= 10;
    }

    printf("\n");
    return 0;
}