#include"decleration.h"
char name_ck[]="0123456789";
void newaccount(void)   
{
	    newaccount:
	        system("cls");
            printf("\n\n");
            space();
            printf("\t\t");
            times();
            space();
            //gotoxy(5,10);
            my_name:
            printf("Enter name : ");      			 //account user name  
            fflush(stdin);
            gets(account.full_name);
            if(name_checker(account.full_name,47,3))goto my_name;
            space();
            father_name:
            printf("FATHER's NAME :");     			 //account holder fathers name
            fflush(stdin);
            gets(account.fathname);
            if(name_checker(account.fathname,47,4))goto father_name; 
            space();
            mother_name:
            printf("MOTHER's NAME :");    			//account holder mother name   
            fflush(stdin);;
            gets(account.mothname);
            if(name_checker(account.mothname,47,5))goto mother_name; 
            space();
            gender:
            printf("GENDER   ( male / female ) :"); //account holder gender
            fflush(stdin);
            gets(account.gender);
            if(gender_check(account.gender,47,6))goto gender; 
            space();
            dop:
            printf("DOP ( 31/1/2022 ) :"); 			//account holder DATE OF BIRTH
            fflush(stdin);
            gets(account.DOP);
            if(dop_check(account.DOP,47,7))goto dop;
            space();
            num:
  			printf("Enter Contact Number: ");       //ACCOUNT HLDER CONTACT NUMBER
  			fflush(stdin);
            scanf("%lld",&account.number);
            if(phone_num(account.number,47,8))goto num; 
            space();
            mail:
            printf("Enter MAIL ID: ");      		 //ACCOUNT HLDER MAIL ID
  			fflush(stdin);
            gets(account.gmail);
            if(mail_checker(account.gmail,47,9))goto mail;
            space();
            printf("ADDRESS..");                     //ADDRESS OF ACCOUNT HOLDER
            fflush(stdin);
            gets(account.address);
            space();
            adh:
            printf("ADHAR NUMBER");					//ACCOUNT HOLDER ADHAR NUMBER
            scanf("%lld",&account.adharnum);
            if(adhar_check(account.adharnum,47,11))goto adh; 
            space();
            printf("Enter Username: ");             //ACCOUNT HOLDER USER NAME
            fflush(stdin);
            gets(account.username);
            space();
            printf("Re-enter Username: ");          //ACCOUNT HOLDER USERNAME BUFFER
            fflush(stdin);
            gets(name);
            printf("\n");
            space();
            mpass:
            printf("Enter Passcode: ");             //ACCOUNT HOLDER  PASSCODE
            fflush(stdin);
            gets(account.passcode);
            if(check_password(account.passcode,47,15))goto mpass;
            space();
            mcode:
            printf("Re-enter Passcode: ");          ////ACCOUNT HOLDER  PASSCODE BUFFER
            fflush(stdin);
            gets(code);
            if(check_password(code,47,16))goto mcode;
            if(!strcmp(account.passcode,code)){gotoxy(47,16);goto mcode;}
            printf("\n");
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
            
}
