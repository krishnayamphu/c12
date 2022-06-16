#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    f=fopen("data.txt","a");
    putc('z',f);
    printf("Data updated successfully.");
    fclose(f);

return 0;
}
