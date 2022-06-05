#include<stdio.h>
int main()
{
    int a[100],n,i,e=0,o=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e=e+a[i];
        else
        o=o+a[i];
    }
    if(o>e)
    printf("%d",o-e);
    else
    printf("%d",e-o);
}