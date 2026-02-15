#include <stdio.h>

//iterative solution
// int factorial(int n){
//     for (int i = n; i > 1; i--){
//         n = n * (i - 1);
//     }
//     return n;
// }

//recursive solution
int factorial(int n){
    if (n == 0 || n == 1){ //base case
        return 1;
    }
    return n * factorial(n - 1); //recursive case
}

//multiplication via repearted addition
int times(int n, int m) {
    if(m == 1) //base case
        return n;
    else
        return n + times(n,m-1); //recursive case
}

//main function to test the above functions
int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    
    int a = 4, b = 3;
    printf("%d times %d is %d\n", a, b, times(a, b));
    
    return 0;
}