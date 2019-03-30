#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insertBeg();
void insertEnd();
void insertAtPos();
void deleteBeg();
void deleteEnd();
void deleteAtPos();
void display();

int main(){
    int choice, choice1, choice2;
    struct node* head = NULL;
    printf("\tMENU\n\n");
    printf("1. Insert\n\t1.1 At Front\n\t1.2 At End\n\t1.3 In Between");
    printf("\n\n");
    printf("2. Delete\n\t2.1 From Front\n\t2.2 From End\n\t2.3 From Between");
    printf("\n\n");
    printf("3. Display Linked List");
    printf("\n\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("Enter your choice : ");
            scanf("%d", &choice1);
            switch(choice1){
            case 1:insertBeg();

            case 2:insertEnd();

            case 3:insertAtPos();

            }

        case 2:
            printf("Enter your choice : ");
            scanf("%d", &choice2);
            switch(choice2){
            case 1:deleteBeg();

            case 2:deleteEnd();

            case 3:deleteAtPos();

            }

        case 3:
            printf("Linked List is : ");
        }
    }
    return 0;
}
