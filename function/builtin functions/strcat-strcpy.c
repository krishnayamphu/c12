#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
char name[]="Aptech";
char cname[20];
char firstname[]="Ram";
char lastname[] ="Rana";

strcat(firstname,lastname);
printf("Student name: %s",firstname);

strcpy(cname,name);
printf("\nCompany name: %s",cname);

getch();
return 0;
}


