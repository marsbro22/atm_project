#ifndef DECLERATION_H
#define DECLERATION_H
#include<stdio.h>
#include<string.h>
	
void _register_data()
void section();
void data1();
void write_Fdata();
void read_Fdata();
int option;
char name[20],code[20];

int id; 
//FILE*ptr;
void space();
struct information //structure data type, stores account information
{
    char full_name[20];
    //char last_name[20];
    char phone[20];
    char username[50];
    char passcode[20];
    int deposit;
    int withdraw;
    int addcash;
    
    char gmail[50];
    char gender[50];
    char DOP[50];
    
    long long int adharnum;
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
#endif


