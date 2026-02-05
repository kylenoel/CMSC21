#include <stdio.h>

int addOne(int x) {
    return x + 1;
}

int main() {
    int a = 5;
    a = addOne(a);
    a = addOne(a);
    printf("%d", a);
}
