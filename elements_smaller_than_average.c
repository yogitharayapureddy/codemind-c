#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c+=a[i];
    }
    c=c/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=c)
        t++;
    }
    printf("%d",t);
}