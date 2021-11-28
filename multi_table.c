#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the  no whose table u want");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}