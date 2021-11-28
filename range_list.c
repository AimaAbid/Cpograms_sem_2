//To find range of an array .range=biggest -smallest
#include<stdio.h>
int main()
{   int size,i;
    int a[100];
    printf("Enter the size of array\n");
    scanf("%d",&size);

    printf("Enter the elements of array\n");

    //input the array
    for(i=0;i<size;i++)
     {
         
         scanf("%d",&a[i]);
     } 
    
    //to find smallest   
    int smallest=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]<smallest)
         smallest=a[i];
    }
    
    //to find biggest
    int biggest =a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>biggest)
         smallest=a[i];
    }
    int range;
    range=biggest-smallest;
    printf("The range of the array is %d\n",range);

}