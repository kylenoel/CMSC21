#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct LinkedList{
    Node *head;
}LinkedList;

void printList(LinkedList *list){
    Node *current = list->head;
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

//append
//insert at position
//delete at position

int main() {

    Node *firstNode = malloc(sizeof(Node));
    firstNode->data = 10;
    firstNode->next = NULL;

    Node *secondNode = malloc(sizeof(Node));
    secondNode->data = 20;
    secondNode->next = NULL;

    firstNode->next = secondNode;

    Node *thirdNode = malloc(sizeof(Node));
    thirdNode->data = 30;
    thirdNode->next = NULL;
    secondNode->next = thirdNode;


    // printf("%d\n", firstNode->data);
    // printf("%d\n", firstNode->next->data);

    LinkedList l; //{10, 20, 30}
    l.head = firstNode; 

    printList(&l);

    Node *fourthNode = malloc(sizeof(Node));
    scanf("%d", &fourthNode->data);

    thirdNode->next = fourthNode;
    fourthNode->next = NULL;

    printList(&l);


    return 0;
}