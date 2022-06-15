#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
    char address[100];
};
int main(){

struct Student s;
printf("%d",sizeof(s));

return 0;
}
