#include<stdio.h>
int main()
{
    int a[100],b[100],size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the elements of array");
    
    //input array from the user
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //invert the array
    for(i=0;i<size;i++)
    {
        b[i]=a[size-i-1];
    }
    
    //print the reversed array
    for(i=0;i<size;i++)
    {
        printf("%d",b[i]);
    }


    return 0;

}
