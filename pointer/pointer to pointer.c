#include<stdio.h>
#include<conio.h>
int main(){
    int a=5;
    int *p, **pt, ***ptr;

    p=&a;
    pt=&p;
    ptr=&pt;

    printf("a:%d",a);
    printf("\np:%d",*p);
    printf("\npt:%d",**pt);
    printf("\nptr:%d",***ptr);

    printf("\n\nAddress of a:%u",&a); //100
    printf("\nAddress value of p:%u",p); //100
    printf("\nAddress of p:%u",&p); //200
    printf("\nAddress value of pt:%u",pt); //200
    printf("\nAddress of pt:%u",&pt); //300
    printf("\nAddress value of ptr:%u",ptr); //300
    printf("\nAddress of ptr:%u",&ptr); //400







return 0;
}
