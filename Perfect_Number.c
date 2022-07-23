#include<stdio.h>
int main()
{
    int n,a=0,t=0,num,i;
    scanf("%d",&n);
    num=n;
    for(i=1;i<n;i++)
    {
        t=n%i;
        if(t==0)
        {
            a=i+a;
        }
    }
    if(a==n)
    printf("True");
    else
    printf("False");
}