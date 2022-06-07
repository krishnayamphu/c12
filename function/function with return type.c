#include<stdio.h>
#include<conio.h>
int getMaxSpeed(); //function declaration
int main(){

int speed=getMaxSpeed(); //function call

printf("Max Speed: %d",speed);

getch();
return 0;
}

//function definition
int getMaxSpeed(){
    return 300;
}
