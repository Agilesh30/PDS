/*A cybersecurity system stores login results in an integer array:
∙ 1 → successful login
∙ 0 → failed login
Write a function to count successful logins.
Function Prototype
int countSuccessful(int login[], int n);
Sample Input
7
1 0 1 1 0 0 1
Sample Output
Successful Logins: 4
*/
#include <stdio.h>
int countSuccessful(int a[],int n)
{
 int count=0;
 for (int i=0;i<n;i++)
 {
    if (a[i]==1)
        count++;
 }
 return count;
}
int main()
{
    int r;
    printf("Enter size of the array");
    scanf("%d",&r);
    int a[r];
    printf("Enter values:");
    for (int i=0;i<r;i++)
            scanf("%d",&a[i]);
    printf("Successful Logins:%d",countSuccessful(a,r));
}
