#include<stdio>

void push(int ele, int top, int size, int ar[size]){
    if(top > (size - 1))
        printf("Overflow");
    else
        ++top;
        ar[top] = ele;
}

int pop(int top, int size, int ar[size]){
    if(top == -1)
        printf("Underflow");
    else
        return ar[top];
}

int main(){
    int size = 10, top = -1;
    printf("MENU");
    printf("1. INSERT");
    printf("2. DELETE");
    printf("3. VIEW");
    return 0;
}
