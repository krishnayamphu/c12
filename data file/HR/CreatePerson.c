#include<stdio.h>
#include<conio.h>
FILE *f;
typedef struct{
    char name[20];
    char address[30];
}Person;
int main(){
Person p={"Sita","Pkr"};

f=fopen("person.txt","a+");
fwrite(&p,sizeof(p),1,f);
fclose(f);
printf("Person details inserted.");
getch();
return 0;
}
