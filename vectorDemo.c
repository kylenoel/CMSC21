#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

int main(){
    //Vector
    // int array[5] = {1, 2, 3, 4, 5};
    //size = the current number of elements in the vector
    //capacity = the total number of elements the vector can hold before needing to resize
    Vector v;
    v.size = 0;
    v.capacity = 5; // Initial capacity
    v.data = malloc(v.capacity * sizeof(int)); // Allocate memory for the vector

    for(int i=0; i<v.capacity; i++){
        v.data[i] = i + 1; // Fill the vector with values {1,2,3,4,5}
        v.size++;
    }

    for(int i=0; i<v.size; i++){
        printf("%d ", v.data[i]); // Print the elements of the vector
    }
    printf("\n");

    //expanding the size of the vector
    if(v.size >= v.capacity){
        v.data = realloc(v.data, v.capacity * 2 * sizeof(int));
        v.capacity *= 2; // Double the capacity
        printf("Resized vector to capacity: %d\n", v.capacity);
    }

    // Adding more elements to the vector after resizing
    for(int i=v.size; i<v.capacity; i++){
        v.data[i] = i + 1; // Fill the vector with new values {6,7,8,9,10}
        v.size++;
    }

    for(int i=0; i<v.size; i++){
        printf("%d ", v.data[i]); // Print the elements of the vector after resizing
    }
    printf("\n");

    

    free(v.data); // Free the allocated memory for the vector
    return 0;
}