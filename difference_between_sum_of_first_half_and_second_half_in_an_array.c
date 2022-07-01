#include<stdio.h>
int main()
{
    int n,a[100],i,m,s,c,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=n/2;
    for(i=0;i<m;i++)
    {
        s=s+a[i];
    }
    for(i=m;i<n;i++)
    {
        c=c+a[i];
    }
    r=c-s;
    printf("%d",r);
}