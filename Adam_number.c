#include<stdio.h>
#include<math.h>
int rev(int);
int main()
{
    int n,i,r,b;
    scanf("%d",&n);
    int sq=n*n;
    int c=rev(n);
    int sq1=c*c;
    b=rev(sq1);
    if(b==sq)
    printf("True");
    else
    printf("False");
    return 0;
}
int rev(int n)
{
    int r1=0,r;
    while(n!=0)
    {
        r=n%10;
        r1=r1*10+r;
        n=n/10;
    }
    return r1;
}