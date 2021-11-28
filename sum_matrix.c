#include<stdio.h>
int main()
{
    int i,j,m1[3][3],m2[3][3],sum=0;
    printf("enter matrix 1");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&m1[i][j]);
       } 
    }
    printf("enter matrix 2");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&m2[i][j]);
       } 
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           sum=sum+m1[i][j]+m2[i][j];
           

       } 
    }
    printf("the sum is %d",sum);
}