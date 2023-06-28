#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Initialize the random number generator
    srand(time(0));

    int minRange = 1;
    int maxRange = 100;

    int randomNumber = generateRandomNumber(minRange, maxRange);
    printf("Random number between %d and %d: %d\n", minRange, maxRange, randomNumber);

    return 0;
}
