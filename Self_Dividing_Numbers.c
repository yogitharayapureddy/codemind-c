#include<stdio.h>
int main()
{
    int a,b,i,n,r,temp,sum=0,count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%10!=0)
        {
            n=i,temp=i,sum=0,count=0;
            while(n>0)
            {
                r=n%10;
                sum++;
                if(r==0)
                {
                    break;
                }
                if(temp%r==0)
                {
                    count++;
                }
                n/=10;
            }
            if(sum==count)
            {
                printf("%d ",i);
            }
        }
    }
}