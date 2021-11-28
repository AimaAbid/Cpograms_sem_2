#include<stdio.h>
int main()
{   char choice='y'; 
    int num;
    while(choice=='y')
    {
        printf("Enter a no");
        scanf("%d",&num);
        printf("the square of %d = %d",num,num*num);
        printf("want to continue (y/n)");
        fflush(stdin);
        scanf("%c",&choice);


    }
    


    
    
}