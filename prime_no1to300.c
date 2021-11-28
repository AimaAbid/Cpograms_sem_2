#include<stdio.h>
int main()
{
    int i,j,flag=0;
    for(i=5;i<301;i++)
    {
        for(j=2;j<i-1;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
         printf("%d\n",i);
    }
    return 0;
}