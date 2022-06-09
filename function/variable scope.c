#include<stdio.h>
#include<conio.h>

void test();
int n; //global var
int main(){

test();

n=100;
printf("\n%d",n);
getch();
return 0;
}

void test(){
    int x=5; //local var
    printf("%d\n",x);
    n=10;
    printf("%d",n);
}
