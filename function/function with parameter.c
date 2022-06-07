#include<stdio.h>
#include<conio.h>
void sum(int a, int b); //function declaration
int main(){

sum(5,10);
sum(100,20);

getch();
return 0;
}

//function definition
void sum(int a, int b){
    int sum=0;
    sum=a+b;
    printf("Total sum: %d\n",sum);
}
