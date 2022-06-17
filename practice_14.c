#include<stdio.h>
void sumandavg(float *a,float *b,float *multiplication,float *subtraction){
    float **temporary=&a;
    float **temporarythree=&b;
    float temporarytwo=(**temporary)/(**temporarythree);
    float addition=(**temporary)+(**temporarythree);
     *subtraction=**temporary-**temporarythree;
       *multiplication=(**temporary)*(**temporarythree);
    *b=temporarytwo;
    *a=addition;
}
int main(){
    float first_varriable,second_varriable,multiplication,Subtraction;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
    sumandavg(&first_varriable,&second_varriable,&multiplication,&Subtraction);
    printf("The Divided value is %f\n",second_varriable);
    printf("The Multiplication value is %f\n",multiplication);
    printf("So the subtraction is %f\n",Subtraction);
    printf("So the Addition is %f\n",first_varriable);
}