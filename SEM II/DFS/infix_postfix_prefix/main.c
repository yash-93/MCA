#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int len;
char res[20];
void infixToPostfix(char exp[]);
void infixToPrefix(char exp[]);
char isOperand(char ch);
int precedence();
int main()
{
    char exp[] = "a-b*c+d";
    len = strlen(exp);
    int ch;
    printf("\tMENU\n\n");
    printf("1. Infix to Postfix\n");
    printf("2. Infix to Prefix\n");
    printf("3. Exit\n");

    while(1){
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            infixToPostfix(exp);
        case 2:
            infixToPrefix(exp);
        case 3:
            exit(0);
        }
    }
    return 0;
}

char isOperand(char ch){
    if(ch >= 'a' && ch <= 'z'|| ch >= 'A' && ch <= 'Z')
        return 1;
}

int prcedence(char ch){
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '/' || ch == '*')
        return 2;
    else if(ch == '^')
        return 3;
    else
        return -1;
}

void infixToPostfix(char exp[]){
    for(int i = 0 ; i < len ; i++){
        if(isOperand(exp[i])){
            res[i] = exp[i];
        }
        printf("%c", res[i]);
    }
    //for(int j=0; res[j] != '\0' ; j++){
      //  printf("%c", res[j]);
    //}
}

void infixToPrefix(char exp[]){

}
