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
            printf("Existing Person Details:");
            printf("\n---------------------------");
            printf("\nName: %s",p.name);
            printf("\nAddress: %s",p.address);
            status=0;
        }else{
            break;
        }
    }
    rewind(f);
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            printf("\n\nNew name: ");
            scanf("%s",&p.name);
            printf("New Address: ");
            scanf("%s",&p.address);
            fwrite(&p,sizeof(p),1,fp);
        }else{
            fwrite(&p,sizeof(p),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("person.txt");
    rename("temp.txt","person.txt");

    if(status==0){
        printf("\nData updated successfully.");
    }else{
        printf("\nData not found");
    }

    getch();
return 0;
}
