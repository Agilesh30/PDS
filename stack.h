#include<stdio.h>
char stk[20];
int top=-1;


int pri(char op){
    switch(op)
    {
        case '(':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0
    }


}
void push(char op){
    stk[++top]=op;
   // printf("\n--------pushed%c-------",stk[top]);
}
char pop(){
   // printf("\n--------poped%c-------",stk[top]);
    return stk[top--];
}
