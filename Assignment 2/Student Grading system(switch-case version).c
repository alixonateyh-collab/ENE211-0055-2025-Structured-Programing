#include <stdio.h>

int main()
{
    int n;
    int i;
    char regNo[20];
    int marks;
    char name[50];
    char grade;

    printf("~ Student Grading System ~\n");

    printf("\nHow many students do you want to enter?\n");
    scanf("%d", &n);

    // Loop once for each student
    for (i = 1; i <= n; i++)
    {
        printf("\n--- Student %d of %d ---\n", i, n);

        printf("Enter registration number:\n");
        scanf("%19s", regNo);

        printf("Enter name:\n");
        scanf(" %49[^\n]", name);
        printf("Enter marks:\n");
        scanf("%d", &marks);

        // Work out the grade (switch-case)
        // marks / 10 gives the tens digit: 85 / 10 = 8, 100 / 10 = 10
        switch (marks / 10)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';    // 70 - 100
                break;
            case 6:
                grade = 'B';    // 60 - 69
                break;
            case 5:
                grade = 'C';    // 50 - 59
                break;
            case 4:
                grade = 'D';    // 40 - 49
                break;
            default:
                grade = 'F';    // below 40
        }

        // Display the student's information
        printf("\n---------------------------------\n");
        printf("       STUDENT INFORMATION\n");
        printf("---------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Pass or fail (switch-case): an F is a fail, anything else is a pass
        switch (grade)
        {
            case 'F':
                printf("Status: Fail\n");
                break;
            default:
                printf("Status: Pass\n");
        }

        printf("---------------------------------\n");
    }

    return 0;
}

