#include<stdio.h>
#include<conio.h>
int main(){
/*
    if(condition1 || condition2 || ...){
        //statements;
    }
*/

char username;
printf("Enter username:");
scanf("%c",&username);

if(username=='a'||username=='A'){
    printf("Hello Admin");
}else{
    printf("Invalid username");
}
getch();
return 0;
}
