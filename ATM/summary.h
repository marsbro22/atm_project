#include"data.h"
void summary()
{
	int j=1;
	while(j)
	{
		summary:
			space();
		    printf("Enter Username: ");
            fflush(stdin);
            gets(name);
            space();
            printf("Enter Passcode: ");
            fflush(stdin);
            gets(code);
            ptr=fopen(name,"rb");
                if(ptr==NULL) //file does not opens, account does not exists
                {
                    exist();
                    //goto menu;
                    break;
                }
                else
                {
					read_Fdata();
                        //if(account.passcode==code&&strcmp(account.username,name)==0) //matching entered credentials
                        if(strcmp(account.passcode,code)==0&&strcmp(account.username,name)==0)
						{
                        	data1();                           //for rint normal information about users
                            space();
                            printf("Account Balance: %d Rs\n",account.deposit-account.withdraw+account.addcash);
                            printf("\n");
                            space();
                            printf("Initial Deposit: %d Rs\n",account.deposit);
                            printf("\n");
                            space();
                            printf("Last Deposit: %d Rs\n",account.addcash);
                            space();
                            printf("Last Withdrawal: %d Rs",account.withdraw);
                            printf("\n\n");
                            space();
                            printf("Press Any Key To Continue!!\n\n\n");
                            getchar();
                            getchar();
                            break;
                        }
                        else
                        {
                        
                            wrong();
                            goto summary;
                            break;
                        }
                }
	}
}