//intilization
#include<stdio.h>
   void data1();
   void write_Fdata();
   void read_Fdata();
   int name_checker(char *,int ,int );
   int phone_num(long long,int,int);
   int mail_checker(char *,int,int);
   int adhar_check(long long unsigned int ,int ,int );
   int menu();
   void times();
   void fileerror();
   void wrong();
   void exist();
   void multiple();
   void username();
   void selection();
   
    int option;
    char name[20],code[20];
    char bank[4]="SBI";
    int id;
    
    FILE*ptr; //file pointer
     
     void space()
{
    printf("\t\t\t\t\t       ");   //to print text in middle of screen
}
struct information //structure data type, stores account information
{
    char full_name[20];
    //char last_name[20];
    long long int number;
    char username[50];
    char passcode[20];
    int deposit;
    int withdraw;
    int addcash;
    
    char gmail[50];
    char gender[50];
    char DOP[50];
    
    long long adharnum;
    char fathname[50];
    char mothname[50];
    char address[50];
    
    
    
};
struct bank //structure data type,stores bank information
{
    char bankname[5];
    int branchid;
    int bankamount;
    int available;
};
    //global variable declaration(starting)
    struct information account;
    struct bank data; 
  

