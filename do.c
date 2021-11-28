#include<stdio.h>
#include<string.h>
void prime_no(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
      printf("prime");
    else
      printf("not prime");
        

}
int main()
{   
    int num;
    printf('enter the no');
    scanf("%d",&num);
    prime_no(num);
    return 0;
    
   
    
}