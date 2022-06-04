#include<stdio.h>
int main()
{
    int i,k=0,t;
    char s[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^
]s",s);
        for (i=0;s[i]!=NULL;i++)
        {
            if(s[i]<='9'&&s[i]>='0')
            k=0;
            else
            {
                k=1;
                break;
            }
        }
        if(k==0)
        printf("True
");
        else
        printf("False
");
    }
}