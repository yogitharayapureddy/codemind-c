#include<stdio.h>
int main()
{
    int x[20],n,i,j,c=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        if(x[i]!=-1)
     {    c=1;
        for(j=0;j<n;j++)
        {  
            if(x[i]==x[j] && i!=j)
            {
             c++;
             x[j]=-1;
            }  
        }
        p=p+c/2;
     }    
    }
    printf("%d",p);
    return 0;
}