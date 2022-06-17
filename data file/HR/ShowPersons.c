#include<stdio.h>
#include<conio.h>
FILE *f;
typedef struct{
    char name[20];
    char address[30];
}Person;
int main(){
Person p;
f=fopen("person.txt","r");
while(fread(&p,sizeof(p),1,f)){
    printf("%s\t%s\n",p.name,p.address);
}
fclose(f);

getch();
return 0;
}
