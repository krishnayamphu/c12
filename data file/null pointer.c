#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
f=fopen("data.txt","r");

if(f==NULL){
    printf("\a\a\aFile not found.");
}else{
    printf("File is ready to read.");
}

return 0;
}
