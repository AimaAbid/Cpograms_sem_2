#include<stdio.h>
#include<string.h>
int main()
{   char a[100];
    int len,i,flag=0;
    printf("enter the string");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]!=a[len-i-1])
        {
            flag=1;
            printf("not palandrome");
            break;
        }

    }
    if(flag==0)
     printf("palandrome");
      
}