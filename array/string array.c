#include<stdio.h>
#include<conio.h>
int main(){
int i;
char name[10];
char address[50];
name[0]='a';
name[1]='p';
name[2]='t';
name[3]='e';
name[4]='c';
name[5]='h';

printf("%c",name[0]);
printf("\n===============\n");
for(i=0; i<=5; i++){
    printf("%c",name[i]);
}

printf("\n\nEnter address:");
scanf("%s",&address);

printf("Address: %s",address);
getch();
return 0;
}
