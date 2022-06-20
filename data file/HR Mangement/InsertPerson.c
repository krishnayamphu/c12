void insertPerson(){
    Person p;
    char next='y';
    f=fopen("person.txt","a+");
    while(next=='y'|| next=='Y'){
        printf("\nName:");
        scanf("%s",&p.name);
        printf("Address:",&p.address);
        scanf("%s",&p.address);
        fwrite(&p,sizeof(p),1,f);
        printf("Person details inserted.");
        printf("\n\nAdd another record (Y/N)?:");
        next=getche();
    }
    fclose(f);
}
