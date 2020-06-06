int areConsecutive(int arr[], int n) {
    int i;
    for (i = 0; i < n - 2; i++) {
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]) {
            return 1;
        }
    }
    return 0;
}


#include <stdio.h>

int areConsecutive(int arr[], int n);

int main {
    int arr[9] = {1, 5, 3, 6, 7, 7, 3, 4, 2};
    if (areConsecutive(arr, 9)) {
        printf("Array contains 3 consecutive dupes\n");
        }
    else {
        printf("Array does not contain 3 consecutive dupes\n");
        }
        return 0;
    }
    int areConsecutive(int arr[], int n) {
        int i;
        for (i = 0; i < n - 2; i++) {
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]) {
            return 1;
        }
    }
    return 0;
    }