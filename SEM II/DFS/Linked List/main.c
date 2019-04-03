#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void insertBeg(int data);
void insertEnd(int data);
void insertAtPos(int data);
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
            	//printf("Enter the position where you want to insert : ");
            	//scanf("%d", &pos);
                insertAtPos(val);
                break;
            }
            break;

        case 2:
            printf("Enter your choice : ");
            scanf("%d", &choice2);
            switch(choice2){
            case 1:
                deleteBeg();
                break;

            case 2:
                deleteEnd();
                break;

            case 3:
                deleteAtPos();
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

void insertAtPos(int data){
	int loc = 0, pos;
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = data;
	struct Node* temp;
	if(head == NULL){
		newNode->next = NULL;
		head = newNode;
	}
	else{
	temp = head;
	printf("Enter the position where you want to insert : ");
    scanf("%d", &pos);
    while(loc < pos){
    	temp = temp->next;
    	loc += 1;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	}
}

void insertEnd(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp = NULL;
    newNode->data = data;
    newNode->next = NULL;
    temp = head;
    if(head == NULL){
        head = newNode;
    }else{
        while(temp->next){
        temp = temp->next;
        }
        temp->next = newNode;
        }
}

void deleteBeg(){
	head = head->next;
}

void deleteEnd(){
	struct Node* ptr;
	ptr = head;
	while((ptr->next)->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = NULL;
}

void deleteAtPos(){
	int pos, loc = 1;
	struct Node* temp;
	temp = head;
	printf("Enter the position from where you want to delete : ");
	scanf("%d", &pos);
	while(loc < (pos-1)){
    	temp = temp->next;
    	loc += 1;
	}
	temp->next = (temp->next)->next;
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
