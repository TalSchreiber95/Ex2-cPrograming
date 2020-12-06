#include <stdio.h>
#include "myBank.h"

#define N 50


int main() {
    
    int isRunning = 1;
    double sum, interest;
    int accountNumber;
    char input;
    while (isRunning)
    {
        // printf("input = %c\n", input);

        printf("Please choose transaction type: \n O - Open account\n B - Balance\n D - Deposit\n W - Withdraw\n C - Close account\n I - Interest\n P - Print\n E - Exit\n");
        scanf(" %c", &input);

        switch (input) 
        {

        default:
        printf("Invalid transaction type!\n");
            break;
        case 'O':
            printf("Please enter amount for deposit:\n ");
            // scanf(" %lf", &sum);
            if (scanf(" %lf", &sum) == 1)
            {
                if (sum > 0) 
            {
                openAccount(sum);
            } else {
                printf("Invalid amount\n");
            }
            }
            
            
            break;

        case 'B':
            printf("Please enter an account number: ");
            scanf(" %d", &accountNumber);
            // printf("Balance of account %d is: %lf \n", accountNumber, balance(accountNumber));
            break;

        case 'D':
            printf("Please enter an account number: ");
            scanf(" %d", &accountNumber);
            printf("\nEnter amount to deposit: ");
            scanf(" %lf", &sum);
            // printf("New balance of account %d is: %lf \n", accountNumber, deposit(accountNumber, sum));
            break;

        case 'W':
            printf("Please enter an account number: ");
            scanf(" %d", &accountNumber);
            printf("\nEnter amount to withdraw: ");
            scanf(" %lf", &sum);
            withdraw(accountNumber, sum);
            break;
        
        case 'C':
            printf("Please enter your account number: ");
            scanf(" %d", &accountNumber);
            closeAccount(accountNumber);
            printf("\n");
            break;

        case 'I':
            printf("Enter interest amount: ");
            scanf(" %lf", &interest);
            incInterest(interest);
            break;

        case 'P':
            printf("All accounts: \n");
            printAccounts();
            break;
        case 'E':
            isRunning = 0;
            exit();
            break;
        }
        printf("\n");
    }
    return 0;
}