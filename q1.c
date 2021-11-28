#include<stdio.h>
int main(){
    int pay,i,h;
    
for(i=1;i<11;i++){ 
    
  printf("enter the number of hours you have worked \n");
  scanf("%d",&h);
  if(h>40 ){
      pay=(h-40)*12;
      printf("Your overtime payment= %d \n",pay);
  }
  else{
      printf("you have not done any overtime\n");}
  }
 

return 0;}