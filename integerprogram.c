#include <stdio.h>

int calculateDigitSum(int number) {
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int digitSum = calculateDigitSum(number);
    printf("The sum of digits in %d is: %d\n", number, digitSum);

    return 0;
}
