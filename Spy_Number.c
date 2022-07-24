#include<stdio.h>
int main()
{
    int a,s=0,m=1,t;
    scanf("%d",&a);
    while(a)
    {
        t=a%10;
        s+=t;
        m*=t;
        a/=10;
    }
    if(s==m)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}