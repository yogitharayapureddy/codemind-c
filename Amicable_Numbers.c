#include<stdio.h>
int factor(int n)
{
    int s=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    return s;
}
int main()
{
    int n,m;
    scanf("%d
%d",&n,&m);
    int a=factor(n);
    int b=factor(m);
    if(a==m && b==n)
    printf("Amicable");
    else
    printf("Not Amicable");
}