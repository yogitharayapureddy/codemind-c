#include<stdio.h>
#include<math.h>
int digit(int );
int main()
{
    int n,i,s=0,r;
    scanf("%d",&n);
    int b=n;
    while(n!=0)
    {
        i=digit(n);
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if (b==s)
    printf("True");
    else
    printf("False");
}
int digit(int a)
{
    int c=0;
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    return c;
}