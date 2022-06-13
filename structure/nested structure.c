#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Dob{
    int day;
    int month;
    int year;
};
typedef struct{
    char name[20];
    struct Dob dob;
}Person;

int main(){
    Person p;
    p.dob.day=10;
    p.dob.month=5;
    p.dob.year=2000;
    strcpy(p.name,"Mohan");

    printf("Name: %s",p.name);
    printf("\nDate of Birth (dd-mm-yy): %d-%d-%d",p.dob.day,p.dob.month,p.dob.year);
    return 0;
}

