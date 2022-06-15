#include<stdio.h>
#include<conio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){

union Person p;
p.age=20;
//strcpy(p.name,"Ram");

printf("Age:%d",p.age);


//printf("\nName: %s",p.name);
return 0;
}
