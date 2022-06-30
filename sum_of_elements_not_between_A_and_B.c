#include<stdio.h>
int main()
{
    int ar[100],a,b,n,i,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>=a && ar[i]<=b)
        {
            s1=s1+ar[i];
        }
        else
        {
            s2=s2+ar[i];
        }
    }
    printf("%d",s2);
}