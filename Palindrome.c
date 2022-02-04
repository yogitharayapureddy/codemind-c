#include<stdio.h>
int main()
{
    int i,n,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        i=n%10;
        sum=(sum*10)+i;
        n=n/10;
    }
    if(sum==t)
    printf("True");
    else
    printf("False");
    return 0;
}