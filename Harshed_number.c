#include<stdio.h>
int main()
{
    int n,i,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    if(temp%sum==0)
    printf("True");
    else
    printf("False");
}