//input the elements of matrix and display them as matrix
#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10];

    printf("Enter the no of rows and coloumns in the matrix");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of matrix rowwise");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
