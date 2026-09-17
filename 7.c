#include <stdio.h>
int main()
{
    int R,C,val,sum=0,max,old_sum=0;
    scanf("%d %d",&R,&C);

    int cpu[R][C];
    for (int i=0;i<R;i++)
    {
        printf("Enter Product quantities for warehouse %d:",i+1);
        for (int j=0;j<C;j++)
        {
            scanf("%d",&cpu[i][j]);
        }

    }
      for (int i=0;i<C;i++)
    {
        for (int j=0;j<R;j++)
        {
            sum+=cpu[j][i];
    }
            printf("Product  %d:%d\n",i+1,sum);
        sum=0;
    }}
