#include<stdio.h>
int main()
{
    int i,k,j,sum,m1[3][3],m2[3][3],m3[3][3];
    //input matrix 1
    printf("enter the matrix 1");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&m1[i][j]);
       } 
    }
    //input matrix 2
    printf("enter the matrix 2");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&m2[i][j]);
       } 
    }
    //multiply the two matrices
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+m1[i][k]*m2[k][j];
                m3[i][j]=sum;

            }
        }
    }//printing the result
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
          printf("%d\t",m3[i][j]);
       } 
       printf("\n");
    }


}
