#include<stdio.h>
int main()
{   int i;
    int num;
    int a[10]={9,2,7,20,1,25,3,22,30,32};
    printf("Enter the element you want to search");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num==a[i])
        {
            printf("Element found at location %d",i+1);
            flag=1;
        }
    }
    if(flag==0)
     printf("element not found");

    


}