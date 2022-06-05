#include<stdio.h>
#include<conio.h>
int main(){
int age;
start:
printf("Enter age: ");
scanf("%d",&age);

if(age>=18){
    printf("Age: %d\n\n",age);
    goto start;
}else{
    printf("Your age is less than 18");
}
getch();
return 0;
}
