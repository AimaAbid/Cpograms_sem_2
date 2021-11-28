// To find octal of a number(imcomplete);
#include<stdio.h>
#include<math.h>
int main()
{
    int num,q,rem,oct=0,i=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    q=num;
    while(q!=0)
    {
        rem=q%8;
        q=q/8;
        oct=oct+rem*pow(10,i);
        i=i+1;
    }
    printf("The octal of %d is %d",num,oct);
}