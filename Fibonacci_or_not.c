#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a=0,b=0,c=1;
    if(n==0||n==1)
    printf("True");
    while(a<n)
    {
        a=b+c;
        b=c;
        c=a;
    }
    if(a==n)
    printf("True");
    else
    printf("False");
}