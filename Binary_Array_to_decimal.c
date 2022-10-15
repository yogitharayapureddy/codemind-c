#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],i,n,sum=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    t=n;
    for(i=0;i<n;i++)
    {
        sum+=pow(2,t-1)*arr[i];
        t--;
    }
    printf("%d",sum);
}