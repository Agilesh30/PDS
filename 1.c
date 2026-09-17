/*Data Center Server Load Matrix
A data center records the CPU usage of R servers across C time intervals. Store the values
in a 2D array and calculate the total CPU usage of each server.
Input Format
 First line: R C
 Next R lines: C integer CPU values
Sample Input
3 4
40 50 60 70
80 75 65 70
30 45 50 55
Sample Output
Server 1: 220
Server 2: 290
Server 3: 180*/
#include <stdio.h>
int main()
{
    int R,C,val,sum=0,max,old_sum=0;
    scanf("%d %d",&R,&C);

    int cpu[R][C];
    for (int i=0;i<R;i++)
    {
        printf("Enter consumption for server %d:",i+1);
        for (int j=0;j<C;j++)
        {
            scanf("%d",&cpu[i][j]);
        }

    }
      for (int i=0;i<R;i++)
    {
        for (int j=0;j<C;j++)
        {
            sum+=cpu[i][j];
        printf("Server  %d:%d\n",i+1,sum);
   
    }
}
