#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int x=0;
    for(i=0;i<a;i++)
    {
        char str[5];
        scanf("%s",str);
        int xm=0,xp=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]=='+')
            {
                xp++;
            }
            if(str[j]=='-')
            {
                xm++;
            }
        }
        if(xp==2)
        {
            x++;
        }
        if(xm==2)
        {
            x--;
        }
    }
    printf("%d",x);
    return 0;
}