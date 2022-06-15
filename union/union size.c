#include<stdio.h>
#include<conio.h>
#include<string.h>
union Person{
    char name[20];
    char address[50];  //largest size
    int age;
};

int main(){

union Person p;
printf("Size: %d",sizeof(p));
return 0;
}
