#include<stdio.h>
void sumandavg(float *a,float *b){
    float temporary=*a+*b;
    
    float temporarytwo=(*a)/(*b);
    *a=temporary;
    *b=temporarytwo;

}
int main(){
    float first_varriable,second_varriable;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
    sumandavg(&first_varriable,&second_varriable);
    printf("So the sum value is %f and The Diivided value is %f\n",first_varriable,second_varriable);

}