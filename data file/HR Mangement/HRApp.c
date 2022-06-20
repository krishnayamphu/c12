#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
FILE *f,*fp;
#include "Person.c"
#include "Menu.c"
#include "ViewPersons.c"
#include "InsertPerson.c"
#include "UpdatePerson.c"
#include "DeletePerson.c"
#include "SearchPerson.c"

int main(){

    int choice;
    while(1){
        system("cls");
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            viewPersons();
            getch();
            break;
        case 2:
            insertPerson();
            getch();
            break;
        case 3:
            updatePerson();
            getch();
            break;
        case 4:
            deletePerson();
            getch();
            break;
        case 5:
            searchPerson();
            getch();
            break;
        case 6:
            exit(0);
            getch();
            break;
        default:
            printf("Invalid choice");
            getch();
            break;
        }
    }

    getch();
return 0;
}
