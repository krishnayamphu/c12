#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char ch;
    f=fopen("doc.txt","r");
    ch=getc(f);

    printf("Output: %c",ch);
    fclose(f);

return 0;
}
