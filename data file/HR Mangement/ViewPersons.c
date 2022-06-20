void viewPersons(){
    Person p;
    f=fopen("person.txt","r");
    if(f==NULL){
        printf("\nFile not found.");
    }else{
        printf("========== All Persons ===========\n");
        while(fread(&p,sizeof(p),1,f)){
            printf("%s\t%s\n",p.name,p.address);
        }
    }
    fclose(f);
}
