#include<stdio.h>
int main()
{
    int n,i,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        {
            if(i>temp)
            temp=i;
        }n=n/10;
        
    }
    printf("%d",temp);
}