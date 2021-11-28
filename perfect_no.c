#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter the no");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
         {sum=sum+i;}
        
    }
    if(sum==num)
        {
            printf("%d is perfect",num);
        } 
    else
        {
            printf("not perfect");
        }
    return 0;
}