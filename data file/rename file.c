#include<stdio.h>
#include<conio.h>
int main(){

int status=rename("person.txt","data.txt");

if(status==0){
  printf("File renamed successfully. %d",status); //return 0 if file renamed successfully.
}else{
    printf("Can't rename file. %d",status);
}

return 0;
}
