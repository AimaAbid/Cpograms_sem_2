//display characters of string using pointers
#include<stdio.h>
int main()
{
    char a[100];
    char *p;
    
    printf("enter the string");
    gets(a);
    p=&a;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    return 0;
}