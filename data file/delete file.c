#include<stdio.h>
#include<conio.h>
int main(){

int status=remove("doc.txt");

if(status==0){
  printf("File removed successfully. %d",status); //return 0 if file removed successfully.
}else{
    printf("Can't remove file. %d",status);
}

return 0;
}
