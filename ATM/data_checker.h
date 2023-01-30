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
int name_checker(char *ptr,int x,int y)
{
	while(*ptr) {
        if(!((*ptr>=65&&*ptr<=90)||(*ptr>=97&&*ptr<=122)||(*ptr==32)))    //if(!isalpha(*pt)&&(*pt!=32)) in 
		{
          gotoxy(x,y); return 1;
        }
        ptr++;
    }
    return 0;	
}
int phone_num(long long num,int x,int y)
{
	int i=0;
	for(;num;i++,num/=10);
	if(i!=10){gotoxy(x,y);return 1;}
	else return 0;
	
}
int mail_checker(char *ptr,int x,int y)
{       int check_mail=0,at=0;
      
        char gmail[50]="@gmail.com";
        while(*ptr) {
        if(*ptr==64)
        {	at=1;
        	
        for(check_mail=0;*ptr==gmail[check_mail]&&*ptr;check_mail++,ptr++); 
        if(check_mail!=10) {gotoxy(x,y);return 1;}
        }
        else if(!((*ptr>=65&&*ptr<=90)||(*ptr>=97&&*ptr<=122)||(*ptr==64)||(*ptr==46)||(*ptr>=48&&*ptr<=57)))    //if(!isalpha(*pt)&&(*pt!=32)) in 
		{
		  gotoxy(x,y);
          return 1;
        }
        ptr++;
    }
    if(at!=1){
    	 gotoxy(x,y);
    	 return 1;
	}   
	return 0;
}
int adhar_check(long long unsigned int num,int x,int y)
{
	int i=0;
	for(;num;i++,num/=10);
	if(i!=12){gotoxy(x,y);return 1;}
	else return 0;	
}
int dop_check(char dob[],int x,int y)
{
	int day, month, year;

    // check length of string
    if (strlen(dob) != 10) {
        gotoxy(x,y);
        return 1;
    }

    // extract day, month, and year from string
    sscanf(dob, "%d/%d/%d", &day, &month, &year);

    // check if extracted values are valid dates
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
    	gotoxy(x,y);
        return 1;
    }

    // print valid date of birth

    return 0;
}
int gender_check(char gender[],int x,int y)
{
    if (!((strcmp(gender, "male") == 0)||(strcmp(gender, "MALE") == 0)||(strcmp(gender, "FEMALE") == 0)||(strcmp(gender, "female") == 0))){
        gotoxy(x,y);return 1;
    }
    return 0;
}
int check_password(char password[],int x,int y) {
   int length         = strlen(password);
   const char caps[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   const char small[] = "abcdefghijklmnopqrstuvwxyz";
   const char num[]   = "01234567890";
   const char spl[]   = " ~!@#$%^&*()_+`-=|{[:'<>,.?/\]}";
    if(!((length>=8)&&(strpbrk(password,small))&&(strpbrk(password,caps))&&(strpbrk(password,num))&&(strpbrk(password,spl))))
	  { gotoxy(x,y);
	    return 1;
	  }
    else return 0;
}