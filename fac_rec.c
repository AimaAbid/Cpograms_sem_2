//to find factorial of number by recursion
#include<stdio.h>
int fac(int n)
{
    int a;
    if(n>1)
    {
        a=n*fac(n-1);
        return a;
    }

    else 
    return 1;
}
int main()
{
    int i,num;
    printf("enter the no");
    scanf("%d",&num);
    printf("the factorial is %d",fac(num));
    return 0;

}
