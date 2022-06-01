#include<stdio.h>
#include<conio.h>
int main(){
/*
    if(condition1 || condition2 || ...){
        //statements;
    }
*/

int x;
printf("Enter value of x:");
scanf("%d",&x);

if(x!=0){
    printf("singned number");
}else{
    printf("value of x is 0 (zero)");
}
getch();
return 0;
}
