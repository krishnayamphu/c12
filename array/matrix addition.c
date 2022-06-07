#include<stdio.h>
#include<conio.h>
int main(){
int i,j,k,l;
int A[2][2]={2,3,4,5};
int B[2][2]={1,2,3,4};
int C[2][2];

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}

printf("\nResult:\n");
for(k=0; k<2; k++){
    for(l=0; l<2; l++){
        printf("%d ",C[k][l]);
    }
    printf("\n");
}

getch();
return 0;
}
