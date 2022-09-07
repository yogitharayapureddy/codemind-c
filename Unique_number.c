#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=0,b,i,j,t,flag=0;
    t=a;
    while(t>0)
    {
        b=t%10;
        c+=1;
        t=t/10;
    }
    int arr[c];
    t=a;
    for(i=0;i<c;i++)
    {
        b=t%10;
        arr[i]=b;
        t=t/10;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }

if(flag==1)
{
    printf("Not Unique Number");
}
else
{
    printf("Unique Number");
}
}