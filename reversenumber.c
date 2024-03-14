#include <stdio.h>

int main() {
    int year, digit, squared;


    printf("Enter a year: ");
    scanf("%d", &year);

    int original_year = year;

    // Squaring individual digits
    while (year != 0) {
        digit = year % 10;
        squared = digit * digit;


        printf("Square of %d: %d\n", digit, squared);

        year /= 10;
    }

    return 0;
}
