//to find factorial of a no
#include<stdio.h>
int main(){
    int i,n,fac=1;
    printf("enter the number whose factoeial u have to find");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        fac=fac*i;
    }
    printf("the factorial of %d is %d",n,fac);

}