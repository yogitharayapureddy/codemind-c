#include<stdio.h>
int main()
{
    int a,s,i,j;
    scanf("%d",&a);
    int n[a],r[a],t[a];
    for(i=0;i<a;i++)
    {
        r[i]=0;
    }
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        t[i]=n[i];
    }
    for(i=0;i<a;i++)
    {
        while(n[i]!=0)
        {
            j=n[i]%10;
            n[i]/=10;
            r[i]=j+r[i]*10;
        }
    }
    for(i=0;i<a;i++)
    {
        if(r[i]==t[i])
        printf("True
");
        else
        printf("False
");
    }
}