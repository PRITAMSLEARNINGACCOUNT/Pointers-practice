#include<stdio.h>
void exchange(int *a,int *b);
int main(){
    int a,b;
    printf("GIVE THE FIRST VALUE\n");
    scanf("%d",&a);
    printf("GIVE THE SECOND VALUE\n");
    scanf("%d",&b);
    exchange(&a,&b);
    printf("SO THE FIRST VALUE IS %d\n", a );
     printf("SO THE SECOND VALUE IS %d\n",b );
}
void exchange(int *a,int *b){
    int temporary;
    temporary=*a;
    *a=*b;
    *b=temporary;

}