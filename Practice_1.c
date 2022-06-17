#include<stdio.h>
int main(){
    int a;
    a=3;
    printf("The adress of the varriable a is %u\n",&a);
    int *b=&a;
    //*b=&a;
    printf("The value of the varriable is %d\n",*b);
}