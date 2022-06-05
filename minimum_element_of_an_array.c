#include<stdio.h>
int main()
{
    int a[1000];
    int n,i,min;
    min=a[0];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("%d",min);
}