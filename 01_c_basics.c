/*
we want to review the basics of programming in C:
- variable declaration and initialization
- taking input from the user
- printing output to the console
- conditional statements (if else)
- control structures (switch case, loops)
- arrays
*/
#include <stdio.h>

int main() {
    //variable declaration and initialization
    // int age = 0;
    // float height = 0.0;
    // char grade = ' ';

    // printf("Enter your age: ");
    // scanf("%d", &age);

    // printf("Enter your height in meters (e.g., 1.75): ");
    // scanf("%f", &height);

    // printf("Enter your grade (A, B, C, D, F): ");
    // scanf(" %c", &grade);

    // //printing output to the console
    // printf("== User Information ==\n");
    // printf("Age: %d years\n", age);
    // printf("Height: %.2f meters\n", height);
    // printf("Grade: %c\n", grade);

    // //if else conditional statement: minor/adult/senior citizen
    // if(age < 18){
    //     printf("You are a minor.\n");
    // } else if(age >= 18 && age < 60){
    //     printf("You are an adult.\n");
    // } else {
    //     printf("You are a senior citizen.\n");
    // }

    // //switch case: grade interpretation
    // switch(grade){
    //     case 'A':
    //         printf("Excellent!\n");
    //         break;
    //     case 'B':
    //         printf("Very Good!\n");
    //         break;
    //     case 'C':
    //         printf("Good!\n");
    //         break;
    //     case 'D':
    //         printf("Pass!\n");
    //         break;
    //     case 'F':
    //         printf("Fail!\n");
    //         break;
    //     default:
    //         printf("Invalid grade entered.\n");
    // }

    //arrays
    int scores[5];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    //output all the elements
    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }

    float average = sum / 5.0;
    printf("\nAverage score: %.2f\n", average);

    

    return 0;
}