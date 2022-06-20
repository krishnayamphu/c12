void searchPerson(){
    Person p;
    char name[20];
    printf("Search by Name:");
    scanf("%s",&name);
    f=fopen("person.txt","r");
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            printf("\n\nExisting Person Details:");
            printf("\n---------------------------");
            printf("\nName: %s",p.name);
            printf("\nAddress: %s\n\n",p.address);
            break;
        }else{
            printf("\nData not found!\n\n");
            break;
        }
    }
    fclose(f);
}
