#include<stdio.h>
#include<conio.h>

int main(){
   int a=5;
   int *ip;
   ip=&a;

   printf("address value of p:%u",ip);
   ip++;

   printf("\nafter increment address value of p: %u",ip);
return 0;
}
