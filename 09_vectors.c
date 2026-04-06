#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void initVector(Vector *v) {
    v->size = 0;
    v->capacity = 4; // Initial capacity
    v->data = malloc(v->capacity * sizeof(int));
}

void pushBack(Vector *v, int value) {
    if (v->size >= v->capacity) {
        v->capacity *= 2; // Double the capacity
        v->data = realloc(v->data, v->capacity * sizeof(int));
        printf("Resized vector to capacity: %d\n", v->capacity);
    }
    v->data[v->size] = value;
    v->size++;
}

void printVector(Vector *v) {
    for (int i = 0; i < v->size; i++) {
        printf("%d ", v->data[i]);
    }
    printf("\n");
}

void freeVector(Vector *v) {
    free(v->data);
}

int main() {
    Vector v;
    initVector(&v);

    for(int i = 1; i <= 10; i++) {
        pushBack(&v, i);
    }

    printVector(&v);

    freeVector(&v);
    return 0;
}