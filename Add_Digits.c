#include<stdio.h>
int main()
{
    int a,i=0,j;
    scanf("%d",&a);
    while(a>0||i>9)
    {
        if(a==0)
        {
            a=i;
            i=0;
        }
        j=a%10;
        i+=j;
        a/=10;
    }
    printf("%d",i);
}