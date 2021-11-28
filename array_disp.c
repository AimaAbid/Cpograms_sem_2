#include<stdio.h>
int main(){
   int num,a[100],i;
   printf("Enter the size of array\n");
   scanf("%d",&num);
   printf("enter the array\n");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);

   }
   for(i=0;i<num;i++)
   {
       printf("%d",a[i]);

   }
    
}