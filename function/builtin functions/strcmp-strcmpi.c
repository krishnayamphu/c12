#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
char s1[]="Aptech";
char s2[]="APTECH";
char s3[]="Aptech";

printf("\nEqual: %d",strcmp(s1,s3));
printf("\nNot Equal: %d",strcmp(s1,s2));
printf("\nEqual with Ignore Case: %d",strcmpi(s1,s2));

getch();
return 0;
}


