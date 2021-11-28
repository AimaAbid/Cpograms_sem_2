#include<stdio.h>
int main()
{
    float n, y=1.0,x;
    float i;
    printf("Enter the value of x and n\n");
    scanf("%f%f",&x,&n);
    for(i=1;i<=n;i++)
    {
        y=y*x;
    }
    printf("%f to power %f is equal to %f",x,n,y);
    return 0;
}