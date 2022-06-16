#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    f=fopen("data.txt","w");
    fputs("Welcome",f);
    printf("Data inserted successfully.");
    fclose(f);

return 0;
}
