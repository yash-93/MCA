#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void insertBeg(int data);
void insertEnd(int data);
void insertAtPos();
void deleteBeg();
void deleteEnd();
void deleteAtPos();
void display(struct Node* ptr);

int main(){
    int choice, choice1, choice2, val;
    head = NULL;
    printf("\tMENU\n\n");
    printf("1. Insert\n\t1.1 At Front\n\t1.2 At End\n\t1.3 In Between");
    printf("\n\n");
    printf("2. Delete\n\t2.1 From Front\n\t2.2 From End\n\t2.3 From Between");
    printf("\n\n");
    printf("3. Display Linked List");
    printf("\n\n");
    printf("4. Exit");
    printf("\n\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("Enter the value to insert : ");
            scanf("%d", &val);
            printf("Where do you want to insert : ");
            scanf("%d", &choice1);
            switch(choice1){
            case 1:
                insertBeg(val);
                break;

            case 2:
                insertEnd(val);
                break;

            case 3:
                //insertAtPos();
                break;
            }
            break;

        case 2:
            printf("Enter your choice : ");
            scanf("%d", &choice2);
            switch(choice2){
            case 1:
                //deleteBeg();
                break;

            case 2:
                //deleteEnd();
                break;

            case 3:
                //deleteAtPos();
                break;

            }
            break;

        case 3:
            printf("Linked List is : ");
            display(head);
            printf("\n\n");
            break;

        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}

void insertBeg(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    if(head == NULL){
        newNode->next = NULL;
        head = newNode;
    }else{
        struct Node* temp;
        temp = head;
        head = newNode;
        newNode->next = temp;
    }
    printf("\n\n");
}

void insertEnd(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp = NULL;
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }else{
        while(temp->next){
        temp = temp->next;
        }
        temp->next = newNode;
        }
}

void display(struct Node* head){
    struct Node* temp = NULL;
    if(head == NULL){
        printf("Empty List");
    }else{
        temp = head;
        while(temp != NULL){
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
