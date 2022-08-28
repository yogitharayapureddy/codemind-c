#include<stdio.h>
#include<math.h>
int happy(int x)
{
    int s=0,r,res;
    while(1>0)
    {
        s=0;
        while(x>0)
        {
           
               r=x%10;
               s+=pow(r,2);
               x=x/10;
          
           
        }
        if(s>9)
        {
            x=s;
            continue;
        }
        else
        {
            break;
        }
    }
    if(s==1 || s==7)
    {
        res=1;
        return res;
    }
    else
    {
        res=0;
        return res;
    }
}
int main()
{
    int a,res;
    scanf("%d",&a);
    res=happy(a);
    if(res==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}