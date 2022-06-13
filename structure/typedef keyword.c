#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct{
    char name[20];
    int age;
}Person;

int main(){
    Person p={"Ram",24};

    printf("Name: %s",p.name);
    printf("\nAge: %d",p.age);
    return 0;
}

