#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("enter the string");
    gets(a);
    while(a[i]!=0)
    {
        i++;

    }
    printf("the length of string is %d",i);
    return 0;
}