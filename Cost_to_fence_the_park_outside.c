#include<stdio.h>
int main()
{
    int a,b,x,y,t;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    t=(a+(2*x))*(b+(2*x));
    if(t>=0)
    printf("%d",(t-a*b)*y);
}