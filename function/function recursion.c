#include<stdio.h>
#include<conio.h>

void hello(){
    static int i=1;
    printf("Hello World\n");
    i++;
    if(i<=5){
        hello();
    }

}
int main(){

hello();

getch();
return 0;
}


