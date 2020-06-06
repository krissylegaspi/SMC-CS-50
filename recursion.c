#include <stdio.h>

// Calculates the sum of numbers from 1 to k using recursion

int sum(int k) {
    if (k != 0)
        return k + sum(k - 1);
    else
        return k;
}

int main() {
    int num, result;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }
    while (num < 0);
    result = sum(num);
    printf("sum = %d", result);
    return 0;
}
