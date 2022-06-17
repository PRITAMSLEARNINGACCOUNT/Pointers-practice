#include<stdio.h>
void Tentimes(int varriable){
    int value=10*(varriable);
    varriable=value;
}
int main(){
    int a;
    printf("Give a Value to The varriable A\n");
    scanf("%d",&a);
   // printf("Adress of the varriable a is %u\n",&a);
    Tentimes(a);
     //printf("Adress of the varriable after function a is %u\n",&a);
    printf("Now the tentimes of your given value is %d\n",a);
   
    printf("This is not returning the multiplied value due to call by value\n");

    return 0;


}