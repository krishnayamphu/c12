#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char name[]="ABC";
    char address[]="KTM";

    f=fopen("document.txt","a");
    fprintf(f,"%s\t%s\n",name,address);

    printf("data write successfully.");
    fclose(f);
return 0;
}
