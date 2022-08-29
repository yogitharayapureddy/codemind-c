#include<stdio.h>
int main()
{
    int n,x=0,k=0,i,t;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        t=n%i;
        if(t==0)
        {
            x=i+k;
            k=x;
        }
    }
    if(k>n)
    printf("True");
    else
    printf("False");
}