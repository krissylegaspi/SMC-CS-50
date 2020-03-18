#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Assignment 1: Calculates the weighted total score

****************************/

int main()

{

    // Declare variables
    int score1, score2, score3, midterm, final;
    int totalweightedscore, averageassign;

    // Store inputs to variables
    printf("Enter Score 1: ");
    scanf("%d", &score1);
    printf("Enter Score 2: ");
    scanf("%d", &score2);
    printf("Enter Score 3: ");
    scanf("%d", &score3);
    printf("Enter Midterm Score: ");
    scanf("%d", &midterm);
    printf("Enter Final Score: ");
    scanf("%d", &final);

    // Score calculations and weight of assignments, midterm, and final
    averageassign = (score1 + score2 + score3) / 3;
    totalweightedscore = (averageassign * 0.40) + (midterm * 0.30) + (final * 0.30);

    // Score results
    printf("Your final score is: %d", totalweightedscore);

    return 0;
}