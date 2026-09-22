/*An IT company records the total hours a server was available and the total monitored hours.
Calculate the server uptime percentage.
Function Prototype
float calculateUptime(int availableHours, int totalHours);
Business Rule
Uptime % = (Available Hours / Total Hours) � 100
Sample Input
95 100
Sample Output
Uptime: 95.00%
*/
float calculateUptime(int availableHours, int totalHours)
{
    return (float)availableHours/totalHours*100;
}
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Available hours and Total Hours:");
    scanf("%d %d",&a,&b);
    printf("Uptime :%0.2f",calculateUptime(a,b));
}
