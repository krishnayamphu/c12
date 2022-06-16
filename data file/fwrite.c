#include<stdio.h>
#include<conio.h>
FILE *f;
struct Person{
    char name[20];
    char address[30];
};
int main(){
    struct Person p={"Sita","Dharan"};
    f=fopen("person-list.txt","a");
    fwrite(&p,sizeof(p),1,f);
    printf("Person details inserted.");
    fclose(f);
return 0;
}
