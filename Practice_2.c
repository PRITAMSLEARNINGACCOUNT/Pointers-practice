#include<stdio.h>
void test(int *i){
    printf("The adress of i is %u\n",&i);
    printf("The adress which is pointed to i is %d\n",i);
    printf("The value of a on main function is %d\n",*i);

}
int main(){
    int a;
    a=21;
    printf("The value of a is %d\n",a);
   
    printf("The Adress of a is %u\n",&a);
    test(&a);
    return 0;


}