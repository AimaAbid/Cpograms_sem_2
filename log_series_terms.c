#include<stdio.h>
#include<math.h>
float series(float x)
{
    int i;
    float a=(x-1)/x,z=(x-1)/x;
    for(i=2;i<8;i++)
    {
        a=a+1/2*(pow(z,i));
    }
    return a;
}
int main()
{
    float x;
    printf("Enter the value of x");
    scanf("%f",&x);
    printf("The sum of first 7 terms is %f",series(x));
    return 0;
}