#include <stdio.h>
void rotateRight(int arr[],int len,int rotate)
{
int i,j;
int iteration=1,length=0;
for (j=len-rotate+1;iteration<=rotate-1;j++)
    {
        printf("%d ",arr[j]);
        iteration++;
        length++;
    }
length++;
for (j=0;length<=len;j++)
    {
        printf("%d ",arr[j]);
        length++;
    }
}

int main()
{
    int n,k;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter values");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Rotate value: ");
    scanf("%d",&k);
    rotateRight(arr,n,k);

}
/*
10 20 30 40 50 60


60 10 20 30 40 50   -- 5 0 1 2 3 4 --2 -->len-rotate+1 * 1 iteration (rotate-1)times -->
50 60 10 20 30 40   -- 4 5 0 1 2 3 --3 -->6-3+1 --4 * 2 iteration 
40 50 60 10 20 30   -- 3 4 5 0 1 2 --4
*/
