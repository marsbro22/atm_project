#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ATM.h"
#include "DECLERATION.h"
#include "DATA_CHECKER.h"
#define bank_selection "SBI"
FILE *ptr;

void selection()
{
	int typ,col=47,row=4;
	system("cls");
	gotoxy(35, 2);
	printf("************* WELLCOME TO %s bank ****************",bank_selection);
	gotoxy(col, row);
	printf(" 0 . exit ");gotoxy(col, row++);
    printf(" 1 . create account ");gotoxy(col, row++);
    printf(" 2 . Summary ");gotoxy(col, row++);
    printf(" 3 . Deposit ");gotoxy(col, row++);
    printf(" 4 . Withdraw ");gotoxy(col, row++);
    printf("enter your choice  : ");
    scanf("%d",&typ);
    system("cls");
	switch(typ)
	{
		case 1:
			newaccount();
			break;
		case 2:
			summary();
			break;
		case 3:
			deposit();
			break;
		case 4:
			withdraw();
			break;
		case 0:
			exit(1);
			break;
	}
}
void deposit()
{
	int j=1;
	while(j)
	{
	       addcash:
	       	gotoxy(35, 2);
	       	printf("************* WELLCOME TO %s bank ****************\n",bank_selection);
	        gotoxy(47,4);
		    printf("Enter Username: ");
		    getchar();
            gets(name);
            gotoxy(47,5);
            printf("Enter Passcode: ");
            gets(code);
            ptr=fopen(name,"rb");
                if(ptr==NULL) //file does not open = user does not exists
                {
                	printf("wrong user name \n enter any key to continue");
                	getchar();
                    goto addcash;
                    break;
                }
                else
                {
                read_Fdata();
                        if(strcmp(account.passcode,code)==0&&strcmp(account.username,name)==0)//compaing entered credentials
                        {
                            system("cls");
                            gotoxy(52,2);
                            printf("Welcome--%s",strupr(account.full_name));
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
                selection();
                break;
            }
        }
}
void newaccount(void)   
{
	    newaccount:
	        data1();
	        
             ptr=fopen(account.username,"r");//opening file in read mode,read mode does not creates a new file,it opens existing file
                if(ptr!=0)
                {
                    username();  //if file opens,it means user name already exists
                    goto newaccount;
                    //break;
                }
                else
                {
                    //if(account.passcode==code&&strcmp(account.username,name)==0)
                    if(strcmp(account.passcode,code)==0&&strcmp(account.username,name)==0)
                    {
                        space();
                        printf("Your Account Has Been Created Successfully!!\n");
                        deposit:
                        printf("\n");
                        space();
                        printf("Deposit Some Money: ");
                        scanf("%d",&account.deposit);
                            if(account.deposit%500==0&&account.deposit!=0)
                            {
                                printf("\n");
                                space();
                                printf("Money Deposited Successfully!!\n");
                                space();
                                printf("Account Balance: %d Rs",account.deposit);
                                printf("\n\n");
                                space();
                                printf("Date Saved Successfully!!\n\n\n");
                                space();
                                printf("Press Any Key To Continue!!\n\n\n");
                            }
                            else
                            {
                                multiple();
                                goto deposit;
                                //break;
                            }
                    }
                    else
                    {
                        printf("\n");
                        space();
                        printf("Entered Credentials Doesn't Match!!\n");
                        space();
                        printf("Press Any Key To Re-enter!!");
                        getchar();
                        getchar();
                        goto newaccount;
                        
                        //break;
                    }
                }
        ptr=fopen(account.username,"wb"); //opening file in write mode.
            if(ptr==NULL)
            {
                fileerror();
                goto newaccount;
                //break;
            }
            else
            {
                write_Fdata();        //write a data in usar file
            }
            getchar();
            getchar();
            selection();
            
}
void summary()
{
	int j=1;
	while(j)
	{
		    summary:
		    gotoxy(35, 2);
	       	printf("************* WELLCOME TO %s bank ****************\n\n",bank_selection);
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
                        	//data1();                           //for rint normal information about users
                        	system("cls");
                            gotoxy(52,2);
                            printf("Welcome--%s",strupr(account.full_name));
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
                            selection();
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

void withdraw()
{
int j=1;
	while(j)
	{
		    withdraw:
		    gotoxy(35, 2);
	       	printf("************* WELLCOME TO %s bank ****************\n",bank_selection);
	        gotoxy(47,4);
		    printf("Enter Username: ");
		    getchar();
            gets(name);
            gotoxy(47,5);
            printf("Enter Passcode: ");
            gets(code);
            
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
                        //times();
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
                selection();
                break;
            }
        }
}
		