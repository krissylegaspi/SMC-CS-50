#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/****************************

Your name: Kristine Legaspi

What project does: Assignment 3

****************************/

float Balance(float current_balance);
float Deposit(float current_balance, float deposit);
float Withdrawal(float current_balance, float withdraw);

void Quit();

int main(void) {

float current_balance = 0;
float deposit, withdraw;
int option;

do {
    printf("1. Show Balance.\n");
    printf("2. Make a Deposit.\n");
    printf("3. Make a Withdrawal.\n");
    printf("4. Quit.\n");
    printf("Please select an option: \n");
    scanf("%d", &option);

switch (option) {
    case 1: // Show Balance
        printf("The current balance is %0.2lf\n\n", current_balance);
        break;
    case 2: // Make a Deposit
        printf("Enter the amount to deposit: ");
        scanf("%f", &deposit);
        if (deposit <= 0 || deposit >= 10000) {
            printf("Amount not accepted.\n");
        }
        else
            current_balance = Deposit(current_balance, deposit);
        break;
    case 3: // Make a Withdrawal
        printf("Enter the amount to withdraw: ");
        scanf("%f", &withdraw);
        if (withdraw > current_balance || withdraw <= 0 || current_balance <= 0) {
            printf("You cannot withdraw.\n");
        }
        else
            current_balance = Withdrawal(current_balance, withdraw);
        break;
    case 4: // Quit
        Quit();
    return 0;

    default: 
        printf("Please enter numbers between 1 to 4: \n");
        continue;
    }  
} 

while (option >= 1 || option <= 4);
return 0;

}

float Balance(float current_balance) {
    return current_balance;
}

float Deposit(float current_balance, float deposit) {
    current_balance = current_balance + deposit;
    return current_balance;
}

float Withdrawal(float current_balance, float withdraw) {
    current_balance = current_balance - withdraw;
    return current_balance;
}

void Quit() {
    printf("Please enter to continue...\n");
    printf("Thank you! Exiting the program.\n");
}
