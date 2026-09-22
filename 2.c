/*. A data center records CPU loads of three servers. Find the server having the highest CPU  load.
Function Prototype
int findHighest(int a, int b, int c);
Sample Input
72 91 85
Sample Output
Highest Server Load: 91
*/

int findHighest(int a,int b,int c)
{
    int max=a;
    if (b>max)
        max=b;
    else if (c>max)
        max=c;
    return max;
}

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Highest Server Load : %d",findHighest(a,b,c));
}
