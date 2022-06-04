#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],j[100];
    int i,m=0,k=0,a=0;
    scanf("%[^
]s",s);
    for (i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        j[k]=s[i];
        else
          j[k]=' ';
        k++;
    }
    for(i=0;i<strlen(j);i++)
    {
        if(j[i]==' ')
        {
            m=0;
        }
        else
        {
            m++;
            if(a<=m)
            a=m;
        }
    }
    printf("%d",a);
    return 0;
}