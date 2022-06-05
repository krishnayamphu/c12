#include<stdio.h>
#include<conio.h>
int main(){
int i;
int num[5];
num[0]=10;
num[1]=20;
num[2]=30;
num[3]=40;
num[4]=50;

printf("%d",num[4]);
printf("\n============\n");

for(i=0; i<5; i++){
    printf("\n%d",num[i]);
}

getch();
return 0;
}
