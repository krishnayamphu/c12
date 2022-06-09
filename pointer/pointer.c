#include<stdio.h>
#include<conio.h>
int main(){
    int a=5;
    int *ip; //integer pointer
    char *ch; //character pointer

    ip=&a;

    printf("Address of a: %u",&a);
    printf("\nAddress value of ip: %u",ip);

    printf("\n\nValue of a: %d",a);
    printf("\nValue of *ip: %d",*ip);




return 0;
}
