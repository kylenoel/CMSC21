#include <stdio.h>

void change(int *a){
    *a = 11;
    printf("inside change: %d\n", *a);
}

int main() {
    int x = 10;
    // int *ptr = &x;
    //i want to be able to directly change the value of x through the function change()
    change(&x);
    printf("in main: %d\n", x);
    
    int arr[5] = {1,67,3,4,5};
    //a pointer is just a variable that holds a memory address
    printf("%d", *(arr + 1)); //1

    return 0;
}