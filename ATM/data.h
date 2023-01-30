
void data1()
{
     system("cls");
     printf("\n\n");
     space();
     times();
     space();
     printf("Welcome--%s",strupr(account.full_name));
     printf("\n\n");
     space();
     printf("Name : %s",account.full_name);
     printf("\n\n");
     space();
     printf("GENDER : %s",account.gender);
     printf("\n\n");
     space();
     printf("DATE OF BIRTH : %s",account.DOP);
     printf("\n\n");
     space();
     printf("GMAIL : %s",account.gmail);
     printf("\n\n");
     space();
     printf("Father Name: %s",account.fathname);
     printf("\n\n");
     space();
     printf("Mother Name: %s",account.mothname);
     printf("\n\n");
     space();
     printf("Contact: %lld",account.number);
     printf("\n\n");
     space();
     printf("Adhar number: %lld",account.adharnum);
     printf("\n\n");
     space();
     printf("address: %s",account.address);
}
void write_Fdata()
{
	fprintf(ptr,"%s\n",account.full_name);  //printing all data in file
	fprintf(ptr,"%lld\n",account.number);
	fprintf(ptr,"%s\n",account.username);
    fprintf(ptr,"%s\n",account.passcode);
	fprintf(ptr,"%s\n",account.fathname);
    fprintf(ptr,"%s\n",account.mothname);
    fprintf(ptr,"%lld\n",account.adharnum);
    fprintf(ptr,"%s\n",account.address);
    fprintf(ptr,"%d\n",account.deposit);
    fprintf(ptr,"%d\n",account.withdraw);
    fprintf(ptr,"%d\n",account.addcash);               
    fprintf(ptr,"%s\n",account.gender);
    fprintf(ptr,"%s\n",account.DOP);
    fprintf(ptr,"%s\n",account.gmail);
    fprintf(ptr,"%s\n",account.fathname);
    fclose(ptr);
}
void read_Fdata()
{
	fgets(account.full_name,50,ptr);			//take data from file 
    fscanf(ptr,"%lld",&account.number);
    fscanf(ptr,"%s",&account.username);
    fscanf(ptr,"%s",&account.passcode);
    fgetc(ptr);
    fgets(account.fathname,50,ptr);
    fgets(account.mothname,50,ptr);
    fscanf(ptr,"%lld\n",&account.adharnum);
    fgets(account.address,50,ptr);
    fscanf(ptr,"%d",&account.deposit);
    fscanf(ptr,"%d",&account.withdraw);
    fscanf(ptr,"%d",&account.addcash);
    fscanf(ptr,"%s",&account.gender);
    fscanf(ptr,"%s",&account.DOP);
    fscanf(ptr,"%s",&account.gmail);
    fclose(ptr);
}