#include<stdio.h>
int main()
{
    int sum,num,n;
    
    printf("enter the no");
    scanf("%d",&num);
    
    sum=num%10;
    while(num/10!=0)
    {
        num=num/10;
        sum=sum+(num%10);
    }
    printf("%d",sum);
    return 0;
}