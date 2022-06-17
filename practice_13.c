#include<stdio.h>
void sumandavg(float a, float b,float *i,float *f){
    float **fone;
    fone=&f;
    float ***ftwo;
    ftwo=&fone;
    ***ftwo=(a)/(b);
    float **ione;
    ione=&i;
    float ***itwo;
    itwo=&ione;

    ***itwo=a+b;
    
    
   

}
int main(){
    float first_varriable,second_varriable,avg,sum;
    printf("Give A Value to first varriable\n");
    scanf("%f",&first_varriable);
    printf("Give a Value to Second Varriable\n");
    scanf("%f",&second_varriable);
    sumandavg(first_varriable,second_varriable,&sum,&avg);
    printf("So the sum value is %f and The Diivided value is %f\n",sum,avg);
    return 0;
}