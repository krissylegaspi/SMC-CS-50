#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: For this discussion write a unique code Structure that demonstrates the use of pointer to Struct that were covered in the slides.

try passing Struct by value and by reference to function.  Make sure to add a comment to explain.

Struct are public by default
Classes are private by default
%d = integer
%lf = double
%f = float

****************************/

// // Pointer struct
// struct Pointer {
//     int x;
//     int y;
// };

// // Pointer operation
// void increment(struct Pointer *k) {
//     k -> x++;
//     k -> y++;
// }

// void print(struct Pointer k) {
//     printf("(%d, %d)\n", k.x, k.y);
// }

// int main() {
//     struct Pointer k;
//     k.x = 2;
//     k.y = 4;
//     print(k);
//     increment(&k);
//     print(k);
//     return 0;
// } 

// Pointer struct
struct pet {
    char name[10];
    char breed[10];
    int age;
};

int main() {
    // Declare pointer to structure
    struct pet mypet = {"Nico", "Shepherd", 5};
    struct pet *ptrpet;
    ptrpet = &mypet;

    printf("Pet's name is: %s\n", ptrpet -> name);
    printf("Pet's breed is: %s\n", ptrpet -> breed);
    printf("Pet's age is: %d\n", ptrpet -> age);

    // Increment age
    ptrpet -> age++;
    printf("Next year, the pet's age is: %d\n", ptrpet -> age);

    return 0;
}