#include<stdio.h>
int main(){
    int i;
    int a[6]={1,4,6,2,3,5};
    int smallestindex=0;
    for(i=1;i<6;i++)
    {
        if(a[smallestindex]>a[i])
          smallestindex=i;
    }
    printf("the location of smallest element is %d",i+1);

    return 0;
}