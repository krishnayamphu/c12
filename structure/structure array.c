#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
};
int main(){
int i;
struct Student s[2];

s[0].age=20;
s[1].age=24;

strcpy(s[0].name,"Ram");
strcpy(s[1].name,"Hari");

for(i=0; i<2; i++){
    printf("Name:%s",s[i].name);
    printf("\nAge: %d\n\n",s[i].age);
}


return 0;
}
