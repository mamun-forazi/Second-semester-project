5#include <stdio.h>

int main() {
    int i, marks;
    float gp, totalGP = 0;

    // Display subject list
    printf("Subject List:\n");
    printf("1. Bangla\n");
    printf("2. English\n");
    printf("3. Math\n");
    printf("4. C Programming\n");
    printf("5. Physics\n");
    printf("6. ELC-I\n");
    printf("7. Computer Fundamental\n");
    printf("\n");

    for (i = 1; i <= 7; i++) {

        while (1) {
            printf("Enter marks for subject %d (0-100): ", i);
            scanf("%d", &marks);

            if (marks >= 0 && marks <= 100) {
                break;
            } else {
                printf("Error: Marks must be between 0 and 100. Try again.\n");
            }
        }

        if (marks >= 80) {
            gp = 4.00;
            printf("Grade: A+\n");
        }
        else if (marks >= 75) {
            gp = 3.75;
            printf("Grade: A\n");
        }
        else if (marks >= 70) {
            gp = 3.50;
            printf("Grade: A-\n");
        }
        else if (marks >= 65) {
            gp = 3.25;
            printf("Grade: B+\n");
        }
        else if (marks >= 60) {
            gp = 3.00;
            printf("Grade: B\n");
        }
        else if (marks >= 55) {
            gp = 2.75;
            printf("Grade: B-\n");
        }
        else if (marks >= 50) {
            gp = 2.50;
            printf("Grade: C+\n");
        }
        else if (marks >= 45) {
            gp = 2.25;
            printf("Grade: C\n");
        }
        else if (marks >= 40) {
            gp = 2.00;
            printf("Grade: D\n");
        }
        else {
            gp = 0.00;
            printf("Grade: F\n");
        }

        printf("Grade Point: %.2f\n\n", gp);
        totalGP += gp;
    }


    printf("Final CGPA: %.2f\n", totalGP / 7);

    return 0;
}
