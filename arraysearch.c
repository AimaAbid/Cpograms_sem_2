#include<stdio.h>
int main(){
    int sea,s,i,a[100];

    printf("enter the size of array");
    scanf("%d",&s);
    printf("enter the element u want to search");
    scanf("%d",&sea);
    printf("enter the elements of array");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++){
        if(a[i]==sea){
            printf("element found at loacation %d",i+1);
            
        }
     }return 0;
}