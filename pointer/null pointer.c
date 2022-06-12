#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){

    int a=5;
    int *p;
    p=&a;
    printf("%d", *p);

    p=NULL;
 printf("%d", *p);


return 0;
}
