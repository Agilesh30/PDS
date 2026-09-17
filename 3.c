#include <stdio.h>

int main() {
   int r,c,fail=0;
    printf("Enter rows and columns");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++)
        {
            printf("Enter value for row %d",i+1);
            for (int j=0;j<c;j++)
                {
                   scanf("%d",&arr[i][j]); 
                }
        }
    for (int j=0;j<c;j++)
        {
            for (int i=0;i<r;i++)
                {
                 if (arr[i][j]!=1)
                     fail++;
                }
            printf("Time %d: %d\n",j+1,fail);
            fail=0;
        }

    return 0;
}
