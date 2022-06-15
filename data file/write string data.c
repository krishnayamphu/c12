#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char ch;
    f=fopen("data.txt","w");
    while((ch=getchar())!='\n'){
         //printf("%c",ch);
         putc(ch,f);
    }
    fclose(f);

return 0;
}
