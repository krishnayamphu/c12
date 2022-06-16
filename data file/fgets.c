#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char data[20];
    f=fopen("data.txt","r");
    fgets(data,20,f);
    printf("%s",data);
    fclose(f);

return 0;
}
