#include<stdio.h>

int expo(int x,int y){
    int i,ans=1;
    for(i=1;i<y+1;i++){
        ans=ans*x;
    }return ans;
}

int main(){
    int x,y,sol;
    printf("enter the abcissa and ordinate \n");
    scanf("%d%d",&x,&y);
    sol=expo(x,y);
    printf("the exponent is %d",sol);




    return 0;
}