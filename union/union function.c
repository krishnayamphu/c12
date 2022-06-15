#include<stdio.h>
#include<conio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
void info(union Person);

int main(){

union Person p;
p.age=20;
//strcpy(p.name,"Ram");

info(p);

return 0;
}

void info(union Person p){
    printf("Age: %d",p.age);
}
