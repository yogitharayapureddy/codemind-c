#include<stdio.h>
int main()
{
    int n,a[100],k,i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}