#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
};
int main(){

struct Student s;
s.age=18;
strcpy(s.name,"Ram");


printf("Student Name: %s",s.name);
printf("\nStudent Age: %d",s.age);

return 0;
}
