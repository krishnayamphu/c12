#include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *f,*fp;
typedef struct{
    char name[20];
    char address[30];
}Person;
int main(){
    Person p;
    int status=-1;
    char name[20];
    printf("Enter name:");
    scanf("%s",&name);
    f=fopen("person.txt","r");
    fp=fopen("temp.txt","w");
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            continue;
        }else{
            fwrite(&p,sizeof(p),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("person.txt");
    status=rename("temp.txt","person.txt");
    if(status==0){
        printf("file updated successfully.");
    }else{
        printf("file can't update.");
    }
    getch();
return 0;
}
