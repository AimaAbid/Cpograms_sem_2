#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    char a[100],b[100];
    printf("enter the string");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        b[len-i-1]=a[i];
    }
    b[len]='\0';
  puts(b);

    

    return 0;
}