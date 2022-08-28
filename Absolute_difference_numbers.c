#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i=0,t=0,m,j,k;
    scanf("%d%d",&a,&b);
    m=a;
    while(a!=0)
    {
        a/=10;
        i++;
    }
    a=m;
    for(j=0,k=0;j<b;j++,k++)
    {
        t=t+a%10*pow(10,k);
        a/=10;
    }
    a=m;
    a/=pow(10,i-b);
    printf("%d",abs(a-t));
    return 0;
}