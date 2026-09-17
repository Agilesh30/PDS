#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter Team and total number of position");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i=0;i<row;i++)
        {
            printf ("Enter value for Team %d:",i+1);
            for (int j=0;j<col;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    int find,flag=0;
    printf("Enter the id to find: ");
    scanf("%d",&find);
    for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
                {
                    if(arr[i][j]==find){
                        flag=1;
                        printf("Team :%d\nPosition :%d",i+1,j+1);
                    break;
                }
        }  
            if (flag==0)
            {
                printf("Id : %d is not found in the Team list",find);
            }
        }
}
