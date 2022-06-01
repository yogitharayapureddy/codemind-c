#include<stdio.h>
int main()
{
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    int c=0,i;
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        c++;
    }
    printf("%d",c);
    return 0;
}