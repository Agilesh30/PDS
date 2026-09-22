#include <stdio.h>
float calculateBonus(float a,int b)
{
    float bonus;
    if (b<=60)
        bonus=5;
    else if (b<75)
        bonus=10;
    else if (b<90)
        bonus=15;
     else if (b<=100)
        bonus=20;
    bonus*=a/100;
    return bonus;
}
int main()
{
    float sal;
    int score;
    printf("Enter Salary and Score");
    scanf("%f %d",&sal,&score);
    printf("Bonus :%0.2f",calculateBonus(sal,score));

}
