#include<stdio.h>
int add(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        s=s+r*r;
        n/=10;
    }
    if(s>=10)
    {
        return add(s);
    }
    else
    {
        return s;
    }
}int main()
{
    int n;
    scanf("%d",&n);
    if(add(n)==1 ||add(n)==7)
    printf("True");
    else
    printf("False");
    
}