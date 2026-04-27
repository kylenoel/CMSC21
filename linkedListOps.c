#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct LinkedList{
    Node *head;
    Node *tail;
}LinkedList;

//traverse and print
void printList(LinkedList *list){
    Node *current = list->head;
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

//insert at head
void insertAtHead(LinkedList *l, int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = l->head;
    l->head = newNode;

    if(l->tail == NULL){
        l->tail = newNode;
    }
}

//insert at tail (append)
void append(LinkedList *l, int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(l->head == NULL){
        l->head = newNode;
        l->tail = newNode;
    } else {
        l->tail->next = newNode;
        l->tail = newNode;
    }
}

//insert at position
void insertAtPosition(LinkedList *l, int data, int position){
    if(position == 0){
        insertAtHead(l, data);
        return;
    }

    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;

    Node *current = l->head;
    for(int i = 0; i < position - 1 && current != NULL; i++){
        current = current->next;
    }

    if(current == NULL){
        // Position is out of bounds
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;

    if(newNode->next == NULL){
        l->tail = newNode;
    }
}

//delete head
void deleteHead(LinkedList *l){
    if(l->head == NULL){
        return; // List is empty
    }

    Node *temp = l->head;
    l->head = l->head->next;
    free(temp);

    if(l->head == NULL){
        l->tail = NULL; // List is now empty
    }
}
//delete tail
//delete at position
//search


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
    l.tail = thirdNode;

    printList(&l);

    Node *fourthNode = malloc(sizeof(Node));
    scanf("%d", &fourthNode->data);

    thirdNode->next = fourthNode;
    fourthNode->next = NULL;

    printList(&l);


    return 0;
}