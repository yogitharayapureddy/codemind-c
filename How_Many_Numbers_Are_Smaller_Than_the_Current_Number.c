#include<stdio.h> 
int main()
{   
    int x[20],n,i,count=0,j;
    scanf("%d",&n);
     for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    for(i=0;i<n;i++)   
    {   
        count=0;
        for(j=0;j<n;j++)
      {
        if(x[j]<x[i] && i!=j)
         count++;
      }
     printf("%d ",count);
    }
    return 0;
}