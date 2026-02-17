#include <stdio.h>

/*in class, we looked at 3 methods to check for primality:
1. Check if n is divisible by any number from 2 to n-1
2. Check if n is divisible by any number from 2 to n/2
3. Check if n is divisible by any number from 2 to sqrt(n)
*/ 

int isPrime1(int n){
    for(int cf = 2; cf < n; cf++){
        if(n%cf == 0){
            return 0;
        }
    }
    return 1;
}

int isPrime2(int n){
    for(int cf = 2; cf <= n/2; cf++){
        if(n%cf == 0){
            return 0;
        }
    }
    return 1;
}

int isPrime3(int n){
    //n = 25
    //cf = 5, cf^2 = 25
    for(int cf = 2; cf*cf <= n; cf++){
        if(n%cf == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 67;
    printf("%d\n", isPrime1(n));
    printf("%d\n", isPrime2(n));
    printf("%d\n", isPrime3(n));
    return 0;
}