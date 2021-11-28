#include<stdio.h>
int prime_fac(int num)
{
    int i,j,k,flag=0;
    // loop to find prime nos
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if (i%j==0 && i!=j)
            {
                flag=1;
                break;

            }
        }
        //getting prime factors by dividing the  no by prime no
        if(flag==0)
        {
        
          while(num%i==0)
         {
             num = num/i;
             return i;
         }
        }
          
    }


    
}
int main()
{
    int num;
    printf("enter the no whose prime factors u want to find");
    scanf("%d",&num);
    printf("the prime factors are %d",prime_fac(num));
    return 0;
}