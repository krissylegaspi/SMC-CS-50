#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Repeatedly ask user for a number, but when they enter 0, the code displays min, max, and average.

****************************/

int main()

{

    int num = 0; 
    double input = 1,
    min_input = 0,
    max_input = 0,
    total = 0;
    printf("Enter input value, type 0 to stop: \n");
    while (input != 0)
    {
        scanf("%lf",&input);
        if (input != 0)
        {
            if(input < min_input || min_input == 0) min_input = input;
            if (input > max_input || max_input == 0) max_input = input;
            num++;
            total+=input;
        }
    }
    printf("\nThe minimum entry was: %.2lf",min_input);
    printf("\nThe maximum entry was: %.2lf",max_input);
    printf("\nThe average entry was: %.2f",total/num);

    return 0;
} 
