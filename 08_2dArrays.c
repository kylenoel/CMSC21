#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int arr[ROWS][COLS];

    // Input
    printf("Enter %d values:\n", ROWS * COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    printf("\nMatrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}