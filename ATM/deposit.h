
void deposit()
{
	int j=1;
	while(j)
	{
	
	    addcash:
	        space();
		    printf("Enter Username: ");
            fflush(stdin);
            gets(name);
            space();
            printf("Enter Passcode: ");
            fflush(stdin);
            gets(code);
            ptr=fopen(name,"rb");
                if(ptr==NULL) //file does not open = user does not exists
                {
                    exist();
                    //goto menu;
                    break;
                }
                else
                {
                read_Fdata();
                    
                        if(strcmp(account.passcode,code)==0&&strcmp(account.username,name)==0)//compaing entered credentials
                        {
                            printf("\n\n");
                            space();
                            printf("Welcome--%s",strupr(account.full_name));
                            times();
                            printf("\n");
                            space();
                            printf("Account Balance: %d Rs\n",account.deposit+account.addcash-account.withdraw);
                            add:
                            printf("\n\n");
                            space();
                            printf("Enter Amount To Deposit: ");
                            scanf("%d",&account.addcash);
                                if(account.addcash%500==0&&account.deposit!=0)
                                {
                                    printf("\n");
                                    space();
                                    printf("Money Deposited Successfully!!\n");
                                    space();
                                    printf("Account Balance: %d Rs",account.deposit+account.addcash-account.withdraw);
                                    printf("\n\n");
                                    space();
                                    printf("Press Any Key To Continue!!\n\n\n");
                                    getchar();
                                    getchar();
                                }
                                else
                                {
                                    multiple();
                                    goto add;
                                    break;
                                }
                        }
                        else
                        {
                            wrong();
                            goto addcash;
                            break;
                        }
                }
            ptr=fopen(account.username,"wb");//savinng data in file in write mode
            if(ptr==NULL)//if file does not opens, than data is not saved successfully
            {
                fileerror();
                goto addcash;
                break;
            }
            else
            {
                write_Fdata();
                break;
            }
        }
}