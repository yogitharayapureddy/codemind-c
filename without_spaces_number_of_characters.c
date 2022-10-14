#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, c=0, co=0;
    scanf("%[^
]s",&str[i]);
    for(i=0; str[i]!=NULL; i++)
    {
        c++;
    }
    for(i=0; i<c; i++)
    {
        if(str[i]==32)
            co++;
    }
    co = c-co;
    printf("%d", co);
    return 0;
}