#include<stdio.h>
int main()
{
    int ar[100],a,b,n,i,s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>=a && ar[i]<=b)
        s+=0;
        else
        {
            printf("%d ",ar[i]);
            c++;
        }
        
    }
    if(c==0)
    printf("-1");
}