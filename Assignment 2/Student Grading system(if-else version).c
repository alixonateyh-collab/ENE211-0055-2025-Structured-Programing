#include <stdio.h>

int main()
{
    int n;
    int i;
    char regNo[20];
    int marks;
    char name[50];
    char grade;

    printf("~ Student Grading System  ~\n");

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

        // Work out the grade (if-else if-else)
        if (marks >= 70)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        // Display the student's information
        printf("\n---------------------------------\n");
        printf("       STUDENT INFORMATION\n");
        printf("---------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Pass or fail (if-else): pass is 40 and above
        if (marks >= 40)
        {
            printf("Status: Pass\n");
        }
        else
        {
            printf("Status: Fail\n");
        }

        printf("---------------------------------\n");
    }

    return 0;
}
