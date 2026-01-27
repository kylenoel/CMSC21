/*
we want to review the basics of programming in C:
- variable declaration and initialization
- taking input from the user
- printing output to the console
- conditional statements (if else)
- control structures (switch case, loops)
-arrays
*/
#include <stdio.h>

int main() {
    /* ===============================
       VARIABLE DECLARATION & INITIALIZATION
       =============================== */
    int age = 0;
    float height = 0.0;
    char grade = ' ';
    
    /* ===============================
       TAKING INPUT FROM THE USER
       =============================== */
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);  // space before %c avoids newline issues

    /* ===============================
       PRINTING OUTPUT
       =============================== */
    printf("\n--- User Information ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    /* ===============================
       IF-ELSE STATEMENTS
       =============================== */
    if (age < 18) {
        printf("Status: Minor\n");
    } else {
        printf("Status: Adult\n");
    }

    /* ===============================
       SWITCH STATEMENT
       =============================== */
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Fair performance.\n");
            break;
        case 'D':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Failed.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    /* ===============================
       ARRAYS & LOOPS
       =============================== */
    int scores[5];
    int sum = 0;

    printf("\nEnter 5 test scores:\n");

    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    float average = sum / 5.0;

    printf("\nScores entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    printf("\nAverage score: %.2f\n", average);

    return 0;
}
