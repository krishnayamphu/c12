#include<stdio.h>
#include<conio.h>
FILE *f;
struct Person{
    char name[20];
    char address[30];
};
int main(){
    struct Person p;
    f=fopen("person-list.txt","r");
    while(fread(&p,sizeof(p),1,f)){
        printf("Name: %s",p.name);
        printf("\nAddress: %s",p.address);
        printf("\n---------------------\n");
    }
    fclose(f);
return 0;
}
