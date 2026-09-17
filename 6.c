#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter Row and Col");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int max=0,server,time;
    for (int i=0;i<row;i++)
        {
            printf ("Enter value for Row %d:",i+1);
            for (int j=0;j<col;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
                {
                    if (arr[i][j]>max)
                    {
                        max=arr[i][j];
                        server=i+1;
                        time=j+1;
                    }
                }
        }  
        printf("Highest CPU usage :%d \nServer Number :%d \n Time interval:%d",max,server,time);
}
