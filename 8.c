#include <stdio.h>
int main()
{
    int R,C,emp,count=0;
    scanf("%d %d",&R,&C);
    int arr[R][C];
    for (int i=0;i<R;i++)
    {
        printf("Enter Details for Employee %d:",i+1);
        for (int j=0;j<C;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\nEnter Employee to check:");
        scanf("%d",&emp);
        for (int j=0;j<C;j++)
        {
            if (arr[emp-1][j]==1)
                count++;     
    }
            printf("Total access for Employee  %d:%d\n",emp-1,count);
        count=0;
    }
