#include<stdio.h>
int p(int n)
{
    int rev=0,temp=n,r;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;
    }
    if(rev==n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int d1=0,d2=0,i,j;
    int p1,p2;
    for(i=a+1;i<=10000;i++)
    {
        if(p(i)==1)
        {
            d1=i-a;
            p1=i;
            break;
        }
    }
    for(i=a-1;i>0;i--)
    {
        if(p(i)==1)
        {
            d2=a-i;
            p2=i;
            break;
        }
    }
    if(d1>d2)
    {
        printf("%d",p2);
    }
    else if(d2==d1)
    {
        printf("%d %d",p2,p1);
    }
    else
    {
        printf("%d",p1);
    }
}