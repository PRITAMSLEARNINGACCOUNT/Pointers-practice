#include<stdio.h>
void sumandavg(float *a,float *b,float *multiplication,float *subtraction){
    float temporary=*a+*b;
    float temporarythree=(*a)*(*b);
    float temporarytwo=(*a)/(*b);
     *subtraction=*a-*b;
    *a=temporary;
    *b=temporarytwo;
    *multiplication=temporarythree;
}
int main(){
    float first_varriable,second_varriable,multiplication,Subtraction;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
  
    sumandavg(&first_varriable,&second_varriable,&multiplication,&Subtraction);
    printf("So the sum value is %f ,The Divided value is %f And the multiplied value is %f\n",first_varriable,second_varriable,multiplication);
    printf("So the subtraction is%f\n",Subtraction);
}