#include<stdio.h>
#include<conio.h>
int main(){
/*
    if(condition){
        if(condition){
            //statements
        }
        //statements
    }
*/
char result='p';
float p=90;

if(result=='p'){
        printf("Result: Pass\n");
        if(p>=80){
            printf("Division: Distinction");
        }else if(p>=60){
            printf("Division: First");
        }else if(p>=45){
            printf("Division: Second");
        }else{
            printf("Division: Third");
        }
}else{
    printf("Fail");
}
getch();
return 0;
}
