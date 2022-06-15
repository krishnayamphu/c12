#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    f=fopen("doc.txt","w");
    putc('A',f);

    printf("Data inserted successfully.");
    fclose(f);

return 0;
}
