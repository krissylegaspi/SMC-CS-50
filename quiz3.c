// Question 1

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    } else {
        int i;
        for (i = n-1; i >= 2; --i) {
            if (n % i  == 0) {
                return 0;
            }
        }
        return 1;
    }
}

// Question 2

int main() {
    int num;
    int i = isPrime(num);
    if (i = 1; i = 0) {
        if (i == 1) {
            printf("Number is prime");
        }
        else
        {
            printf("The entered number is non-prime");
        }
        return 0;
    }
}
