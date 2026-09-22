#include <stdio.h>
int findEmployee(int a[],int n,int key)
{
    int pos=-1;
    for (int i=0;i<n;i++)
    {
        if (a[i]==key){
            pos=i+1;
            return pos;
        }
    }
    return pos;
}
int main()
{
 int n,key;
 printf("Enter size of the array:");
 scanf("%d",&n);
 int arr[n];
 for (int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("\nEnter Key:");
 scanf("%d",&key);
 printf("The value %d is found in%d",key,findEmployee(arr,n,key));
}
