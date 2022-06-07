#include<stdio.h>
#include<conio.h>
float getDiscountAmount(float price, float percentage); //function declaration
int main(){

printf("Discount Amount: %.2f\n",getDiscountAmount(1000,10));
printf("Discount Amount: %.2f\n",getDiscountAmount(1200,10));
printf("Discount Amount: %.2f\n",getDiscountAmount(650,10));

getch();
return 0;
}

//function definition
float getDiscountAmount(float price, float percentage){
    float disAmount=0;
    disAmount=(price*percentage)/100;
    return disAmount;
}
