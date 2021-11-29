#include<stdio.h>
int main()
{   char a[100];
    int j=0,i,flag=0;
    printf("enter the string");
    gets(a);
    
    while(a[j]!='\0')
    {
        j++;

    }
    for(i=0;i<j;i++)
    {
        if(a[i]!=a[j-i-1])
        {
            flag=1;
            printf("not palindrome");
            break;
        }

    }
    if(flag==0)
     printf("palindrome");
     return 0;
      
}