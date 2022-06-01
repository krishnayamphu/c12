#include<stdio.h>
#include<conio.h>
int main(){
/*
    switch(expression){
    case 1:
        //statements; break;
    case n:
        //statements; break;
    default:
        //statements; break;
    }
*/
int day;
printf("Enter day no.:");
scanf("%d",&day);

switch(day){
case 1:
    printf("Sun"); break;
case 2:
    printf("Mon"); break;
case 3:
    printf("Tue"); break;
case 4:
    printf("Wed"); break;
case 5:
    printf("Thu"); break;
case 6:
    printf("Fri"); break;
case 7:
    printf("Sat"); break;
default:
    printf("Invalid day no."); break;
}
getch();
return 0;
}
