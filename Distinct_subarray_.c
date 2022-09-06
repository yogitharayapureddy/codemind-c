#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j,s=0,c=0;
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=i;j<=b;j++)
        {
            s+=j;
            if(s%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}