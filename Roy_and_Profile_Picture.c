#include<stdio.h>
int main()
{
    int i,n,l;
    scanf("%d%d",&l,&n);
    int w[n],h[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w[i],&h[i]);
    }
    for(i=0;i<n;i++)
    {
        if(w[i]<l||h[i]<l)
        printf("UPLOAD ANOTHER
");
        else if(w[i]==h[i])
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}