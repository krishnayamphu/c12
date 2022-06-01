#include<stdio.h>
#include<conio.h>
int main(){
/*
    if(condition1 && condition2 && ...){
        //statements;
    }
*/

float eng=80, math=70;
if(eng>=35 && math>=35){
    printf("Pass");
}else{
    printf("Fail");
}
getch();
return 0;
}
