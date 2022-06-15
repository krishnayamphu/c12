#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    f=fopen("doc.txt","w");
    printf("file is created.");
    fclose(f);

return 0;
}
