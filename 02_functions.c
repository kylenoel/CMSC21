#include <stdio.h>

int addOne(int x) {
    return x + 1;
}

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}

void printSquare(int x) {
    printf("%d\n", x * x);
}

void test() {
    int x = 10;
}

int doubleIt(int x) {
    return x * 2;
}

int tripleIt(int x) {
    return x * 3;
}


int main() {
    int a = 5;
    a = addOne(a);
    a = addOne(a);
    printf("%d\n", a);

    int result = add(3, 4);
    printf("%d\n", result);

    int sq = square(5);
    printf("%d\n", sq);
    printSquare(6);

    int value = doubleIt(tripleIt(5));
    printf("%d\n", value);
}
