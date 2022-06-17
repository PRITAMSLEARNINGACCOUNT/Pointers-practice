#include<stdio.h>
int main(){
    int a,b,c;
    printf("GIVE A VALUE TO THE VARRIABLE A\n");
    scanf("%d",&a);
    printf("GIVE A VALUE TO THE VARRIABLE B\n");
    scanf("%d",&b);
    printf("GIVE A VALUE TO THE VARRIABLE C\n");
    scanf("%d",&c);
    int *d=&a,*f=&b,*e=&c;
    printf("SO THE ADRESS OF THE VARRIABLE A IS %u\n",d);
    printf("SO THE ADRESS OF THE VARRIABLE A IS %u\n",&a);
    printf("SO THE VALUE OF THE VARRIABLE A IS %d\n",*d);
    printf("SO THE ADRESS OF THE VARRIABLE B IS %u\n",f);
    printf("SO THE ADRESS OF THE VARRIABLE B IS %u\n",&b);
    printf("SO THE ADRESS OF THE VARRIABLE A IS %d\n",*f);
    printf("SO THE ADRESS OF THE VARRIABLE A IS %u\n",e);
    printf("SO THE ADRESS OF THE VARRIABLE A IS %u\n",&c);
    printf("SO THE ADRESS OF THE VARRIABLE A IS %d\n",*e);


}