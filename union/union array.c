#include<stdio.h>
#include<conio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){

union Person p[2];

p[0].age=12;

printf("Age: %d",p[0].age);

p[1].age=20;
printf("\nAge: %d",p[1].age);

return 0;
}
