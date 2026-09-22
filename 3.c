#include <stdio.h>
int classifyResponseTime(int a)
{
    if (a<=200)
        return 1;
    else if (a<=500)
        return 2;
    else
        return 3;

}

int main()
{
    int a,a_;
    printf("Enter Response Time:");
    scanf("%d",&a);
    a_=classifyResponseTime(a);
    printf((a_==1)?"Fast":(a_==2)?"Acceptable":"Slow");
}
