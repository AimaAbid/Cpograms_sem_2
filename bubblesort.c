#include<stdio.h>
int main()
{
        int size,i,a[100],temp,j;
        printf("enter the size of string");
        scanf("%d",&size);
        printf("enter the string");
        //input string from the user

        for(i=0;i<size;i++)
      {
        scanf("%d",&a[i]);
      }
    
       //bubble sort
       for(i=0;i<size-1;i++)
       {
               for(j=0;j<size-1;j++)
               {
                       if(a[j]>a[j+1])                       
                       {
                               temp=a[j+1];
                               a[j+1]=a[j];
                               a[j]=temp;
                               

                       }
               }
       }
    
    
      //print the  array
      for(i=0;i<size;i++)
      {
        printf("%d",a[i]);
      }
    

        return 0;
}        
        