#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Person{
    char name[20];
    int age;
};
void personInfo(struct Person);

int main(){

struct Person p={"Ram",24};
personInfo(p);

return 0;
}

void personInfo(struct Person p){
    printf("Person name: %s",p.name);
    printf("\nPerson age: %d",p.age);
}
