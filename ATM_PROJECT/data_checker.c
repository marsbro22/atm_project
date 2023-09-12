#include<windows.h>
#include<stdio.h>
#include "DATA_CHECKER.h"
void gotoxy(int x,int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("                                                ");
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int name_checker(char *ptr ) 
{
	while(*ptr ) {
        
		if(!((*ptr>=65&&*ptr<=90)||(*ptr>=97&&*ptr<=122)||(*ptr==32)))    //if(!isalpha(*pt)&&(*pt!=32)) in 
        return 1;
        
		ptr++;
    }
    
    return 0;	
}

int phone_num(char *num)
{
	int i=0;
	for(;(*num>=48)&&(*num<=57);*num++,i++);
	printf("\n%d\n",i);
	if(i==10)return 0;
	else return 1;

}

int mail_checker(char *ptr )
{      
		int check_mail=0,at=0;
        char gmail[50]="@gmail.com";
  while(*ptr) {
        	
      if(*ptr==64)
       {	
		at=1;
        	
        for(check_mail=0;*ptr==gmail[check_mail]&&*ptr;check_mail++,ptr++); 
        
		if(check_mail!=10) return 1;
        
       }
        
        else if(!((*ptr>=65&&*ptr<=90)||(*ptr>=97&&*ptr<=122)||(*ptr==64)||(*ptr==46)||(*ptr>=48&&*ptr<=57)))    //if(!isalpha(*pt)&&(*pt!=32)) in 
        return 1;
        
        ptr++;
    }
    
    if(at!=1) return 1;
    
	return 0;
}

int adhar_check(long long unsigned int num)
{
	int i=0;
	
	for(;num;i++,num/=10);
	
	if(i!= 12) return 1;
	
	else return 0;	
}

int dop_check(char dob[] )
{
	int day, month, year;

    // check length of string
    if (strlen(dob) != 10) return 1;

    // extract day, month, and year from string
    sscanf(dob, "%d/%d/%d", &day, &month, &year);

    // check if extracted values are valid dates
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) return 1;

    // print valid date of birth

    return 0;
}

int gender_check(char gender[])
{
    if (!((strcmp(gender, "male") == 0)||(strcmp(gender, "MALE") == 0)||(strcmp(gender, "FEMALE") == 0)||(strcmp(gender, "female") == 0)))
    return 1;
    return 0;
}

int check_password(char password[]) {
   int length         = strlen(password);
   const char caps[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   const char small[] = "abcdefghijklmnopqrstuvwxyz";
   const char num[]   = "01234567890";
   const char spl[]   =" ~!@#$%^&*()_+`-=|{[:'<>,.?/.]}";
   if(!((length>=8)&&(strpbrk(password,small))&&(strpbrk(password,caps))&&(strpbrk(password,num))&&(strpbrk(password,spl))))
   return 1;
	    
    else return 0;
}
void fileerror()  //when file is not opened, this function comes into action
{
    space();
    printf("Error!! Information Not Saved!!\n");
    space();
    printf("Try Again!!\n");
    space();
    printf("Press Any Key To Continue!!");
    getchar();
}
void wrong() //when user enters wrong user name/password this function comes into action
{
    printf("\n\n");
    space();
    printf("Wrong Username or Passcode!!\n");
    space();
    printf("Press Any Key To Continue!!");
    getchar();
    getchar();
}
void exist()  //when user account does not exists, this function comes into action
{
    printf("\n\n");
    space();
    printf("Account Doesnot Exist!!\n");
    space();
    printf("Create New Account!!\n");
    printf("\n\n");
    space();
    printf("Press Any Key To Continue!!");
    printf("\n\n");
    getchar();
    getchar();
}
void multiple()  //when deposit/withdraw amount is not multiple of 500, this function runs
{
    printf("\n");
    space();
    printf("Invalid Amount Entered!!\n");
    space();
    printf("Amount Should Be Multiple Of 500!!\n");
    printf("\n\n");
    space();
    printf("Press Any Key To Re-enter!!");
    getchar();
    getchar();
}

void username()  //when entered user name is already in use,this function runs
{
    space();
    printf("Username Not Available!!\n");
    space();
    printf("Try Another Username!!\n");
    printf("\n\n");
    space();
    printf("Press Any Key To Re-enter!!\n");
    getchar();
    getchar();
}
