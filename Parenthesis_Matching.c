#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int l=strlen(str),i,j,k=0;
    char arr[100];
    int f=1;
    for(i=0;i<l;i++)
    {
        if(str[i]=='('|| str[i]=='{' || str[i]=='[')
        {
            arr[k++]=str[i];
        }
        else
        {
            if(k>0)
            {
                if(arr[k-1]=='('&& str[i]==')')
                {
                    k-=1;
                }
                else if(arr[k-1]=='{' && str[i]=='}')
                {
                    k-=1;
                }
                else if(arr[k-1]=='[' && str[i]==']')
                {
                    k-=1;
                }
                else
                {
                    printf("%d",i+1);
                    f=0;
                    break;
                }
            }
            else
            {
                printf("%d",i+1);
                f=0;
                break;
            }
        }
    }
    if (f==1)
    {
        if(k==0)
        {
            printf("%d",0);
        }
        else
        {
            printf("%d",l+1);
        }
    }
}