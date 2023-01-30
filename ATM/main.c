#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include"newaccount.h"
#include"withdraw.h"
#include"deposit.h"
#include"summary.h"
#include"operation.h"
#include"error.h"
#include"data_checker.h"
//#include"data.h"
//#include"decleration.h"
//user defined function declarations(starting)
    
void selection();


//user defined function declaration(ending)
int main()  //main function starting
{
	  account.deposit=0;
    account.withdraw=0;
    account.addcash=0;
    data.branchid=9216;
    data.bankamount=0;
    data.available=0;
    selection();
    return 0;
}

