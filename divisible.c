#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Discussion 3

Your name: Kristine Legaspi

What project does: The following code checks if the variable entered are divisible by 5 and displays a message accordingly.

****************************/

int main()

{

int j;
printf("Please enter a number from 1 to 100:\n");
scanf("%d", &j);
if (j >= 1 && j <= 100) {
    switch (j % 5) {
        case 0: // Colon, not semi-colon
            printf("The entered number is divisible by 5.\n");
            break;
        default: // "else" statement, anything other than 0
            printf("The entered number is not divisible by 5.\n");
            break;
        }
    }
else {
    printf("The input is not valid.\n");
}
}
