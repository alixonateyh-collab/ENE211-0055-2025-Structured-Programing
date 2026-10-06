#include <stdio.h>
#include <windows.h>
int main()
{
    int correctPin = 3666;
    int pin;
    int choice;
    int attempts;
    int unlocked = 0;
    int i;

    printf("~~~ PIN-Based Door Lock System ~~~\n");

    // Repeats until the correct PIN is entered (so the user can try again after a lockout)
    while (unlocked == 0)
    {
        attempts = 3;   // only 3 attempts each round

        // PIN entry: 3 attempts
        while (attempts > 0 && unlocked == 0)
        {
            printf("\nEnter your 4-digit PIN: ");
            scanf("%d", &pin);

            // Validate PIN length (if-else-if)
            if (pin < 1000)
            {
                printf("PIN is too short (must be 4 digits)\n");
            }
            else if (pin > 9999)
            {
                printf("PIN is too long (must be 4 digits)\n");
            }
            else
            {
                printf("PIN is Precisely  4 digits\n");
            }

            // Check if the PIN is correct
            if (pin == correctPin)
            {
                unlocked = 1;
            }
            else
            {
                attempts = attempts - 1;
                printf("Incorrect PIN. Remaining attempts: %d\n", attempts);
            }
        }

        // Too many wrong attempts: lockout
        if (unlocked == 0)
        {
            printf("\nSystem locked! Wait for 5 seconds.*.\n");

            for (i = 5; i >= 1; i--)
            {
                printf("%d~ ", i);
                fflush(stdout);   // makes the number appear before the delay
                Sleep(1000);      //1-second delay
            }

            printf("\nYou can give it a shot now.\n");
        }
    }

    // Correct PIN within 3 attempts: grant access + show menu
    printf("\nCorrect PIN! Access granted.\n");

    do
    {
        printf("\n~~~ Device Menu ~~~\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &choice);
        // Handle the choice with a switch statement
        switch (choice)
        {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);

    return 0;}

