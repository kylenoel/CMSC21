#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next, *prev;
}Node;

typedef struct LinkedList{
    Node *head;
    Node *tail;
    int size;
}LinkedList;

void initList(LinkedList *list){
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

//traverse and print
void printList(LinkedList *list){
    Node *current = list->head;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insertAtHead(LinkedList *list, int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = list->head;
    newNode->prev = NULL;
    if(list->head != NULL){
        list->head->prev = newNode;
    }
    list->head = newNode;

    if(list->tail == NULL){
        list->tail = newNode; // for the case where the list was empty to begin with
    }

    list->size++;
}

void append(LinkedList *list, int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = list->tail;

    if(list->tail != NULL){ //in the case that the list is not empty, we need to update the old tail's next pointer
        list->tail->next = newNode;
    }
    list->tail = newNode;

    if(list->head == NULL){
        list->head = newNode; // for the case where the list was empty to begin with
    }

    list->size++;
}

//insert at position (given a p, insert a new node at position p)
void insertAtPosition(LinkedList *list, int data, int p){
    if(p == 0){
        insertAtHead(list, data);
        return;
    }
    if(p == list->size){
        append(list, data);
        return;
    }
    if(p > list->size){
        printf("Position out of bounds\n");
        return;
    }

    Node *newNode = malloc(sizeof(Node)); //NULL
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    Node *current = list->head;
    int count = 0;
    for(count = 0; count < p-1 && current != NULL; count++){
        printf("%d, ", current->data);
        current = current->next;
    }
    newNode->next = current->next;
    newNode->prev = current;
    if(current->next != NULL){ // in the case where the list is not empty, we need to update the old next's prev pointer
        current->next->prev = newNode;
    }
    current->next = newNode;

    list->size++;
}

//delete head
void deleteHead(LinkedList *list){
    if(list->head == NULL){
        printf("List is empty\n");
        return;
    }
    Node *temp = list->head;
    list->head = list->head->next;
    if(list->head != NULL){
        list->head->prev = NULL;
    }
    free(temp);
    list->size--;
}
//delete tail
void deleteTail(LinkedList *list){
    // if(list->tail == NULL){
    //     printf("List is empty\n");
    //     return;
    // }
    // Node *current = list->head;
    // while(current->next != list->tail){
    //     current = current->next;
    // }
    // free(list->tail);
    // current->next = NULL;
    // list->tail = current;
    // if(list->tail != NULL){
    //     list->tail->prev = NULL;
    // }
    // list->size--;
        if(list->tail == NULL){
            printf("List is empty\n");
            return;
        }
        Node *temp = list->tail;
        list->tail = list->tail->prev;
        if(list->tail != NULL){//in the case where there are more than 0 nodes left
            list->tail->next = NULL;
        }
        free(temp);
        list->size--;
}
//delete at position p

int main() {

    // Node *firstNode = malloc(sizeof(Node));
    // firstNode->data = 10;
    // firstNode->next = NULL;

    // Node *secondNode = malloc(sizeof(Node));
    // secondNode->data = 20;
    // secondNode->next = NULL;

    // firstNode->next = secondNode;

    // Node *thirdNode = malloc(sizeof(Node));
    // thirdNode->data = 30;
    // thirdNode->next = NULL;
    
    // secondNode->next = thirdNode;

    LinkedList l;
    initList(&l);
    deleteHead(&l); // List is empty
    deleteTail(&l); // List is empty

    printList(&l);

    insertAtHead(&l, 10);
    printList(&l); // {10}

    append(&l, 30);
    printList(&l); // {10, 30}

    insertAtPosition(&l, 20, 1);
    printList(&l);// {10, 20, 30}

    insertAtPosition(&l, 5, 2);
    printList(&l); // {10, 20, 5, 30}

    deleteHead(&l);
    printList(&l); // {20, 5, 30}

    deleteTail(&l);
    printList(&l); // {20, 5}

    return 0;
}