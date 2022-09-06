#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int a,i,j,c=0;
        scanf("%d",&a);
        char str[a];
        scanf("%s",str);
        for(i=0;i<a;i++)
        {
            for(j=i;j<a;j++)
            {
                if(str[i]=='1'&& str[j]=='1')
                {
                    c++;
                }
            }
        }
    printf("%d
",c);
    }
}