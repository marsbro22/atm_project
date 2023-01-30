int j=1;
void withdraw()
{
	while(j)
	{
         	withdraw:
         	space();
            printf("Enter Username: ");
            scanf("%s",&name);
            space();
            printf("Enter Passcode: ");
            scanf("%d",&code);
            ptr=fopen(name,"rb");//opening file in rb mode
                if(ptr==NULL) //if file does not opens then user does not exists
                {
                    exist();
                    //goto menu;
                    break;
                }
                else
                {
                    read_Fdata();
                    if(strcmp(account.passcode,code)==0&&strcmp(account.username,name)==0) //comparing user name and pass code with data entered while creating account
                    {
                    	system("cls");
                        printf("\n\n");
                        space();
                        printf("Welcome--%s",strupr(account.full_name));
                        times();
                        printf("\n");
                        space();
                        printf("Name :%s",strupr(account.full_name));
                        space();
                        printf("Account Balance: %d Rs\n",account.deposit+account.addcash-account.withdraw);
                        draw:
                        printf("\n\n");
                        space();
                        printf("Enter Amount To Withdraw: ");
                        scanf("%d",&account.withdraw);
                        printf("\n");
                        if(account.withdraw>account.deposit+account.addcash)
                        {
                            space();
                            printf("Amount Exceeds The Account Balance!!\n");
                            space();
                            printf("Press Any Key To Re-enter!!");
                            getchar();
                            getchar();
                            goto draw;
                            break;
                        }
                        else
                        {
                            if(account.withdraw%500==0&&account.deposit!=0)
                            {
                                printf("\n\n");
                                space();
                                printf("Amount Withdrawn Successfully!!\n");
                                space();
                                printf("Account Balance: %d Rs\n",account.deposit-(account.withdraw+account.addcash));
                                printf("\n");
                                space();
                                printf("Press An Key To Continue!!");
                                getchar();
                                getchar();
                            }
                            else
                            {
                                multiple();
                                goto draw;
                                break;
                            }
                        }
                    }
                    else
                    {
                        wrong();
                        goto withdraw;
                        break;
                    }
                }
            ptr=fopen(account.username,"wb"); //opening file to print data in file
            if(ptr==NULL)
            {
                fileerror();
                goto withdraw;
                break;
            }
            else
            {
                write_Fdata();
                break;
            }
        }
}
