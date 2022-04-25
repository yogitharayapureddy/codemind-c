#include<stdio.h>
int main()
{
    int n,i,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        i=n%10;
        sum=(sum*10)+i;
        n=n/10;
    }
    if(sum==temp)
    printf("True");
    else
    printf("False");
}