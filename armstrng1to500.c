#include<stdio.h>
//no =dig1dig2dig3
int main(){
   int i,dig1,dig2,dig3,cube1,cube2,cube3;
   printf("1=not armstrong\n");
   for(i=2;i<501;i++){
       dig3=i%10;
       cube3=dig3*dig3*dig3;
       dig2=(i/10)%10;
       cube2=dig2*dig2*dig2;
       dig1=i/100;
       cube1=dig1*dig1*dig1;
       if(cube1+cube2+cube3==i){
           printf("%d=Armstrong no\n",i);
       }
       else{
           printf("%d not armstrong\n",i);
       }
       
   }
    
}