#include<stdio.h>
int main()
{
    int a[100];
    int diff,i,n=10;
    a[0]=2;
    a[1]=1;
    a[2]=3;
    for(i=3;i<n;i++)
    {
        diff=(a[i-1]-a[i-2])+(a[i-2]-a[i-3]);
        a[i]=a[i-1]+diff;
     }

    for(i=0;i<n;i++)
      printf("%d \t",a[i]);
    return 0; 
}

    