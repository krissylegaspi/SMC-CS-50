#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Counts from 1 to 15 in increments of 2

****************************/

// For loop

int main()

{

    int i;
    for (i = 1; i <= 15; i+=2) // Counts starting from 1 to 10; increment by 2
    {
        printf("%d\n", i);
    }
    return 0;
} 

// While loop

int main()

{

    int count = 1; // Count starts from 1 and is initialized with the variable
    while (count <= 15)
    {
        printf("%d\n", count);
        count+=2;
    }

    return 0;

} 
