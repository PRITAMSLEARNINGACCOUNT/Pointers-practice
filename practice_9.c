#include<stdio.h>
int main(){
    int a=10;
    int *i=&a;
    
    int **f=&i;
    printf("So the Value Of A is %d\n",**f);
}