
#include "DECLERATION.h"
#define row 2
#define col 47
FILE*ptr;
void data1()
{
            system("cls");
            
            my_name:
            gotoxy(col, row);
            printf("Enter name : ");      			 //account user name  
            fflush(stdin);
            gets(account.full_name);
            if(name_checker(account.full_name))goto my_name;
            
			father_name:
            gotoxy(col, row);
            printf("FATHER's NAME :");     			 //account holder fathers name
            gets(account.fathname);
            if(name_checker(account.fathname))goto father_name; 
            
            mother_name:
            gotoxy(col, row);
            printf("MOTHER's NAME :");    			//account holder mother name   
            gets(account.mothname);
            if(name_checker(account.mothname))goto mother_name; 
            
            gender:
            gotoxy(col, row);
            printf("GENDER   ( male / female ) :"); //account holder gender
            gets(account.gender);
            if(gender_check(account.gender))goto gender; 
            
			dop:
            gotoxy(col, row);
            printf("DOP ( 31/1/2022 ) :"); 			//account holder DATE OF BIRTH
            gets(account.DOP);
            if(dop_check(account.DOP))goto dop;
            
            num:
            gotoxy(col, row);
  			printf("Enter Contact Number: ");       //ACCOUNT HLDER CONTACT NUMBER
            scanf("%s",account.phone);
            if(phone_num(account.phone))goto num; 
            
			mail:
			gotoxy(col, row);
            printf("Enter MAIL ID: ");      		 //ACCOUNT HLDER MAIL ID
            gets(account.gmail);
            if(mail_checker(account.gmail))goto mail;
            
            gotoxy(col, row);
            printf("ADDRESS..");                     //ADDRESS OF ACCOUNT HOLDER
            gets(account.address);
            
            adh:
            gotoxy(col, row);
            printf("ADHAR NUMBER");					//ACCOUNT HOLDER ADHAR NUMBER
            scanf("%lld",&account.adharnum);
            if( adhar_check( account.adharnum ) ) goto adh; 
            
            gotoxy(col, row);
            printf( "Enter Username: " );             //ACCOUNT HOLDER USER NAME
            fflush( stdin );
            gets(account.username);
            
            gotoxy(col, row);
            printf( "Re-enter Username: " );          //ACCOUNT HOLDER USERNAME BUFFER
            gets(name);
            
            
            mpass:
            gotoxy(col, row);
            printf( "Enter Passcode: " );             //ACCOUNT HOLDER  PASSCODE
            gets(account.passcode);
            if(check_password( account.passcode )) goto mpass;
            
            mcode:
            gotoxy(col, row);
			printf( "Re-enter Passcode: " );          ////ACCOUNT HOLDER  PASSCODE BUFFER
            gets( code );
            if( check_password( code ) ) goto mcode;
            
            if( strcmp( account.passcode, code ) ) goto mcode;
            printf("\n");
            _register_data();
            section();
        
}

void section()
{
	int typ;
            printf("\n0 : EXIT ");
            printf("\n1 : MENU ");
            printf("\n2 : RE-ENTER ");
            printf("\n3 : register \n");
            printf("enter your choice  : ");
            scanf("%d",&typ);
            switch(typ)
            {
            	case 0:
            		exit(1);
            	    break;
            	case 1:
            		selection();
            		break;
                case 2:
                	newaccount();
                	break;
			}
}

void _register_data()
{
	        int row1=row;
            gotoxy(col, row1++);
            printf("You name : ");      			 //account user name  
            puts(account.full_name);
            
            gotoxy(col, row1++);
            printf("FATHER's NAME :");     			 //account holder fathers name
            puts(account.fathname);
            
        
            gotoxy(col, row1++);
            printf("MOTHER's NAME :");    			//account holder mother name   
            puts(account.mothname);
           
        	gotoxy(col, row1++);
            printf("GENDER   ( male / female ) :"); //account holder gender
            puts(account.gender); 
            
            gotoxy(col, row1++);
            printf("DOP ( 31/1/2022 ) :"); 			//account holder DATE OF BIRTH
            puts(account.DOP);
            
            gotoxy(col, row1++);
  			printf("Enter Contact Number: ");       //ACCOUNT HLDER CONTACT NUMBER
            printf("%s",account.phone);
             
            gotoxy(col, row1++);
            printf("Enter MAIL ID: ");      		 //ACCOUNT HLDER MAIL ID
            puts(account.gmail);
            
            gotoxy(col, row1++);
            printf("ADDRESS..");                     //ADDRESS OF ACCOUNT HOLDER
            puts(account.address);
            
            gotoxy(col, row1++);
            printf("ADHAR NUMBER");					//ACCOUNT HOLDER ADHAR NUMBER
            printf("%lld",&account.adharnum);
             
            gotoxy(col, row1++);
            printf( "Enter Username: " );             //ACCOUNT HOLDER USER NAME
            fflush( stdin );
            puts( account.username );
            
            gotoxy(col, row1++);
            printf( "Enter Passcode: " );             //ACCOUNT HOLDER  PASSCODE
            puts( account.passcode );
      
    
}

void write_Fdata()
{
	fprintf( ptr, "%s\n", account.full_name);  //printing all data in file
	fprintf( ptr, "%s\n", account.phone);
	fprintf( ptr, "%s\n", account.username);
    fprintf( ptr, "%s\n", account.passcode);
	fprintf( ptr, "%s\n", account.fathname);
    fprintf( ptr, "%s\n", account.mothname);
    fprintf( ptr, "%lld\n", account.adharnum);
    fprintf( ptr, "%s\n", account.address);
    fprintf( ptr, "%d\n", account.deposit);
    fprintf( ptr, "%d\n", account.withdraw);
    fprintf( ptr, "%d\n", account.addcash);               
    fprintf( ptr, "%s\n", account.gender);
    fprintf( ptr, "%s\n", account.DOP);
    fprintf( ptr, "%s\n", account.gmail);
    fprintf( ptr, "%s\n", account.fathname);
    
    fclose(ptr);
}

void read_Fdata()
{
	fgets( account.full_name, 50, ptr);			//take data from file 
	fgets( account.phone, 11,ptr );
    fscanf( ptr, "%s", &account.username);
    fscanf( ptr, "%s", &account.passcode);
    fgetc( ptr);
    fgets( account.fathname, 50, ptr);
    fgets( account.mothname, 50, ptr);
    fscanf( ptr, "%lld\n",&account.adharnum);
    fgets( account.address, 50, ptr);
    fscanf( ptr, "%d", &account.deposit);
    fscanf( ptr, "%d", &account.withdraw);
    fscanf( ptr, "%d", &account.addcash);
    fscanf( ptr, "%s", &account.gender);
    fscanf( ptr, "%s", &account.DOP);
    fscanf( ptr, "%s", &account.gmail);
    
    fclose( ptr );
}