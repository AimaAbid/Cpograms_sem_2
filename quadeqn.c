#include<stdio.h>
#include<math.h>
void quad(float a,float b,float c){
    float r1,r2,d;
    d=b*b-(4*a*c);
    if(d>=0){
        r1=((-b)+sqrt(b*b-4*a*c))/(2*a);
         r2=((-b)-sqrt(b*b-4*a*c))/(2*a);
         printf("the roots are %f%f",r1,r2);
         }
    else{
        printf("the roots are imaginary");
    }
    

}
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    quad(a,b,c);
    return 0;
}