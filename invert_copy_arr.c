#include<stdio.h>
int main()
{  
    int a[]={5,9,2,6,7};
    int b[5];
    int i;
    for(i=0;i<5;i++)
      b[5-i-1]=a[i];
    for(i=0;i<5;i++)
      printf("%d",b[i]);   


}