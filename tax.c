#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Quiz 2

****************************/

int main()

{

double tax_rate;

if (income < threshold) {
    tax_rate = 0.1;
}

else {
    tax_rate = 0.1 + (income - threshold) / income;
}

printf("%f", tax_rate * income);

} 
