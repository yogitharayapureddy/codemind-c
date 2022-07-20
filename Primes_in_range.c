#include<stdio.h>
int is_prime(int num)
{
    int i;
    for (i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        if(is_prime(a)==1 && a!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}