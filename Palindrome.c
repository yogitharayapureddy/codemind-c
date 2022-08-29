#include<stdio.h>
int main()
{
    int n,i,temp,s=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
       i=n%10;
       s=(s*10)+i;
       n=n/10;
    }
    if(temp==s)
    printf("True");
    else
    printf("False");
}