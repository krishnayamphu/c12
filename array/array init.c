#include<stdio.h>
#include<conio.h>
int main(){
int i;
int age[]={10,11,12,13,14,15};
char name[]="Aptech";


for(i=0; i<=5; i++){
    printf("%d\t",age[i]);
}

printf("\n\nName: %s",name);
getch();
return 0;
}
