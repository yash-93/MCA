#include<stdio.h>
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(precedence(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}

/*
#define SIZE 50
#include<string.h>
#include <ctype.h>
char s[SIZE];
int top=-1;

push(char elem)
{
    s[++top]=elem;
}

char pop()
{
    return(s[top--]);
}

int pr(char elem)
{
    {
    case '#': return 0;
    case ')': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}

main()
{
    char infx[50],prfx[50],ch,elem;
    int i=0,k=0;
    printf("\n\nRead the Infix Expression ? ");
    scanf("%s",infx);
    push('#');
    strrev(infx);
    while( (ch=infx[i++]) != '\0')
    {
        if( ch == ')') push(ch);
        else
            if(isalnum(ch)) prfx[k++]=ch;
            else
                if( ch == '(')
                {
                    while( s[top] != ')')
                        prfx[k++]=pop();
                    elem=pop();
                }
                else
                {
                    while( pr(s[top]) >= pr(ch) )
                        prfx[k++]=pop();
                    push(ch);
                }
    }
    while( s[top] != '#')
        prfx[k++]=pop();
    prfx[k]='\0';
    strrev(prfx);
    strrev(infx);
    printf("\n\nGiven Infix Expn: %s  Prefix Expn: %s\n",infx,prfx);
}*/
