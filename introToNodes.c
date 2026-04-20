#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main() {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = 10;
    newNode->next = NULL;
    
    printf("%d", newNode->data);
    
    Node *secondNode = malloc(sizeof(Node));
    secondNode->data = 20;
    secondNode->next = NULL;
    
    newNode->next = secondNode;
    

    return 0;
}