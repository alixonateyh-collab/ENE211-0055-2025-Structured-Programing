#include <stdio.h>


float balance = 1000;
int correctPin = 3663;

// Function declarations
int login(void);
void showMenu(void);
float checkBalance(void);
void deposit(float amount);
void withdraw(float amount);

int main()
{
    int choice;
    float amount;

    printf("~ Simulated ATM System ~\n");

    // Requirement 1: stop the program if the login fails
    if (login() == 0)
    {
        return 0;
    }

    // Requirements 2, 3 and 4: show the menu repeatedly until the user chooses Exit
    do
    {
        showMenu();
        scanf("%d", &choice);

        // Requirement 3: call the function that matches the choice
        switch (choice)
        {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Enter amount to deposit:\n");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 3:
                printf("Enter amount to withdraw:\n");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Requirement 1: login with a limited number of attempts
// Returns 1 (true) if the login is successful, otherwise 0 (false)
int login(void)
{
    int pin;
    int attempts = 3;   // only 3 attempts allowed

    while (attempts > 0)
    {
        printf("\nEnter your PIN:\n");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            printf("Login successful.\n");
            return 1;   // true
        }

        attempts = attempts - 1;
        printf("Incorrect PIN. Remaining attempts: %d\n", attempts);
    }

    printf("\nMaximum attempts exceeded. Access denied.\n");
    return 0;   // false
}

// Requirement 2: display the ATM menu
void showMenu(void)
{
    printf("\n1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Choose an option:\n");
}

// Displays the current balance (and also returns it)
float checkBalance(void)
{
    printf("Your current balance is: %.2f\n", balance);
    return balance;
}

// Adds the amount to the balance (amount must be positive)
void deposit(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid amount! The deposit must be a positive number.\n");
    }
    else
    {
        balance = balance + amount;
        printf("Deposit successful. New balance: %.2f\n", balance);
    }
}

// Deducts the amount from the balance (amount must be positive and not more than the balance)
void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid amount! The withdrawal must be a positive number.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance! You cannot withdraw more than %.2f.\n", balance);
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawal successful. New balance: %.2f\n", balance);
    }
}

