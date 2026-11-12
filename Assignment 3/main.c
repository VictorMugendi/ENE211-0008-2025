#include <stdio.h>
#include <stdlib.h>


int storedPIN = 1234;
float balance = 5000.00;

// Function declarations
int login();
void checkBalance();
void deposit(float amount);
void withdraw(float amount);
void atmMenu();


// Login / PIN Verification
int login()
{
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3)
    {
        printf("\nEnter your PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN)
        {
            printf("\nLogin successful!\n");
            return 1;
        }
        else
        {
            attempts++;
            printf("Incorrect PIN!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    printf("\nMaximum attempts exceeded. Access denied!\n");
    return 0;
}


// Check Account Balance
void checkBalance()
{
    printf("\nYour current balance is: Ksh. %.2f\n", balance);
}


// Deposit Money
void deposit(float amount)
{
    if (amount > 0)
    {
        balance = balance + amount;

        printf("\nDeposit successful!\n");
        printf("Amount deposited: Ksh. %.2f\n", amount);
        printf("New balance: Ksh. %.2f\n", balance);
    }
    else
    {
        printf("\nInvalid amount! Deposit must be positive.\n");
    }
}


// Withdraw Money
void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("\nInvalid amount! Withdrawal must be positive.\n");
    }
    else if (amount > balance)
    {
        printf("\nInsufficient balance!\n");
    }
    else
    {
        balance = balance - amount;

        printf("\nWithdrawal successful!\n");
        printf("Amount withdrawn: Ksh. %.2f\n", amount);
        printf("Remaining balance: Ksh. %.2f\n", balance);
    }
}


// ATM Menu
void atmMenu()
{
    int choice;
    float amount;

    while (1)
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("\nEnter amount to deposit: ");

                if (scanf("%f", &amount) != 1)
                {
                    printf("Invalid input! Enter a numeric amount.\n");
                    while (getchar() != '\n');
                    break;
                }

                deposit(amount);
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");

                if (scanf("%f", &amount) != 1)
                {
                    printf("Invalid input! Enter a numeric amount.\n");
                    while (getchar() != '\n');
                    break;
                }

                withdraw(amount);
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                printf("Goodbye!\n");
                return;

            default:
                printf("\nInvalid choice! Select between 1 and 4.\n");
        }
    }
}


// Main Function
int main()
{
    printf("================================\n");
    printf("       WELCOME TO OUR ATM       \n");
    printf("================================\n");

    if (login())
    {
        atmMenu();
    }
    else
    {
        printf("\nYour ATM session has been terminated.\n");
    }

    return 0;
}
