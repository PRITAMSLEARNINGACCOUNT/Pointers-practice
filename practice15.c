#include<stdio.h>
void sumandavg(float *a,float *b){
    float **temporary=&a;
    float **temporarytwo=&b;
    float ***ptr_ptr_ptr=&temporarytwo;
    float division=(**temporary)/( ***ptr_ptr_ptr);
   *a=**temporary+***ptr_ptr_ptr;
    *b=division;
}
int main(){
    float first_varriable,second_varriable;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
    sumandavg(&first_varriable,&second_varriable);
    printf("So the sum value is %f\n",first_varriable); 
    printf("The Divided value is %f\n",second_varriable);
    return 0;
}