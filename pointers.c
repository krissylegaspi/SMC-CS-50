#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Assignment 4

****************************/

void part1(double, double, double*, double*);
int part2(int[], int, double);

int main() {

    double a, b, c, d;
    double avg;
    int numbers[20], i, sum = 0, numAboveAvg;
    printf("\nEnter the value of A and B: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);

    // & address
    // * value

    // Calling the function
    part1(a, b, &c, &d);

    // Display returned values
    printf("Value of C is: %lf\n", c);
    printf("Value of D is: %lf\n", d);

    printf("\nEnter 20 integers: ");
    for (i = 0; i < 20; i++) {
        scanf("%d", (numbers + i));
        sum = sum + *(numbers + i);
    }

    avg = (sum / 20.0);
    numAboveAvg = part2(numbers, 20, avg);
    printf("\nThe average of the integers: %0.2lf\n", avg);
    printf("\nNumber of values greater than the average: %d\n", numAboveAvg);

    return 0;

} 

void part1(double a, double b, double *c, double *d) {
    *c = (a / b);
    *d = (a * b);
}

int part2(int arr[], int size, double avg) {
    int numAboveAvg = 0, i;
    for (i = 0; i < 20; i++) {
        if (arr[i] > avg) {
            numAboveAvg = numAboveAvg++;
        }
    }
    return numAboveAvg;
}

