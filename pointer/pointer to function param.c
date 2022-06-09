#include<stdio.h>
#include<conio.h>
void info(char *name);
int main(){
    char name[20];
    printf("Enter name:");
    //scanf("%s",&name);
    gets(name);

    info(name);
    //info("Ram");
return 0;
}

void info(char *name){
 printf("Name: %s",name);
}
