#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

Write a function to take a string of no more than 50 characters (Array of character) and returns the count of a capital letters A-Z. 
Use the function in main to get from the user, a sentence, then show the count of A-Z.

****************************/

int countupper(char * str) {
    int i = 0, count = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ++count;
        i++;
    }
    return count;
}

int main()

{
    char str[51];
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    printf("Number of capital letters in the string is %d\n", countupper(str));
    return 0;
}
