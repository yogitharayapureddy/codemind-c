#include<stdio.h>
int main()
{
    int a[100],n,i;
    float avg=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}