#include<stdio.h>
int main()
{
    char another='y';
    int num,pos=0,neg=0,zero=0;
    while(another=='y')
    {
        printf("enter the no\n");
        scanf("%d",&num);
        if(num>0)
         pos=pos+1;
        else if(num<0)
         neg=neg+1;
        else 
         zero=zero+1;
        printf("Do you want to continue\n(y/n)\n");
        fflush(stdin);
        scanf("%c",&another);  
    }
    printf("The no of positives =%d\nThe no of negatives=%d\nThe no of zeroes =%d",pos,neg,zero);
}