#include <stdio.h>
#include "stack.h"
int main(){
    char exp[30]; scanf("%s",exp);
    push('(');


    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            {
                    push('(');
            }
        else if(exp[i]==')')
            {
                while(stk[top]!='(')
                    {
                     printf("%c",pop());
                    }
                pop();
            }
        else
        {
            //printf("\n\n%d %d",pri(stk))
            if(pri(stk[top])  >=  pri(exp[i]))
            {
                while(pri(stk[top])>=pri(exp[i]))
                {
                     printf("%c",pop());
                }
            }
            push(exp[i]);
        }
    }
        while(stk[top]!='(')
        {
            printf("%c",pop());
        }

}
