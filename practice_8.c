#include<stdio.h>
void sumandavg(float a, float b,float *i,float *f,float *multiplication,float *subtraction){
    *f=(a)/(b);
    *i=a+b;
    *subtraction=a-b;
    *multiplication=a*b;
    
    
   

}
int main(){
    float first_varriable,second_varriable,avg,sum,mul,sub;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
    sumandavg(first_varriable,second_varriable,&sum,&avg,&mul,&sub);
    printf("So the sum value is %f and The Diivided value is %f\n",sum,avg);
     printf("So the Multiplication value is %f and The subtraction value is %f\n",mul,sub);

}