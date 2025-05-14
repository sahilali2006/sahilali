/*
Write a program that take number from user and display sum of Numbers Until user put a negetive value
*/

#include <stdio.h>

int main() {
    float number, total_sum = 0;   
    while (1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number < 0) {
            break;
        }

        total_sum += number;
    }
    printf("The sum of the numbers is: %f\n", total_sum);

    return 0;
}
