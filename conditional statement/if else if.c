#include<stdio.h>
#include<conio.h>
int main(){
/*
    if(condition){
        //statements
    }
*/

float p=90;

if(p>=80){
    printf("Distinction");
}else if(p>=60){
    printf("First");
}else if(p>=45){
    printf("Second");
}else if(p>=35){
    printf("Third");
}else{
    printf("Fail");
}
getch();
return 0;
}
