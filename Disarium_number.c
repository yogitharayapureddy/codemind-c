#include<stdio.h>
#include<math.h>
int main()
{
    int a,n=0,t,i=0,j,u;
    scanf("%d",&a);
    t=a;
    u=a;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    while(t!=0)
    {
        j=t%10;
        n=pow(j,i)+n;
        t=t/10;
        i--;
    }
    if(u==n)
    printf("True");
    else
    printf("False");
}