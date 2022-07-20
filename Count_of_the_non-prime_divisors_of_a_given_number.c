#include<stdio.h>
int prime(int num)
{
    int c=0,i=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int c=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0 && prime(i)==0)
        {
            c++;
        }
    }
    printf("%d",c+1);
    
}