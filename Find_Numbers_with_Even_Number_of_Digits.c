#include<stdio.h>
#include<math.h>
int main()
{
    int x[20],n,i,count=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
      
    for(i=0;i<n;i++)
    {
        d=(int)log10(x[i])+1;
        if(d%2==0)
        count++;
    }
    printf("%d",count);
    return 0;
}