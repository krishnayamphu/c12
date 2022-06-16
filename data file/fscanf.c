#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char name[20];
    char address[30];

    f=fopen("document.txt","r");
    while(fscanf(f,"%s%s",&name,&address)!=EOF){
        printf("%s\t%s\n",name,address);
        printf("-----------------------\n");
    }
    fclose(f);
return 0;
}
