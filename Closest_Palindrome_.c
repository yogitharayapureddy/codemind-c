#include<stdio.h>
#include<math.h>
int p(int n)
{
    int d=0,i,a;
    a=n;
    while(n)
    {
        i=n%10;
        d=d*10+i;
        n/=10;
    }
    if(d==a)
    return 1;
    else
    return 0;
    
}
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a=n+1;
    b=n-1;
    while(1)
    {
        if(p(a)==1)
        break;
        a++;
    }
    while(1)
    {
        if(p(b)==1)
        break;
        b--;
        
    }
    if(abs(b-n)==abs(a-n))
    printf("%d %d",b,a);
    else if(abs(b-n)>abs(a-n))
    printf("%d",a);
    else
    printf("%d",b);
}