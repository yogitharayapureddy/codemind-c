#include<stdio.h>
int main()
{
    int f,i,j,n1,n2;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        f=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}