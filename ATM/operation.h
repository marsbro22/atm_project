
int menu() //to print MENU
{
    int choice;
    system("cls");
    printf("\n\n");
    space();
    printf("MENU:\t");
    times();
    printf("\n\n");
    space();
    printf("1-Create New Account\n");
    space();
    printf("2-Withdraw Cash\n");
    space();
    printf("3-Deposit Cash\n");
    space();
    printf("4-Account Summary\n");
    space();
    printf("5-EXIT\n\n");
    space();
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    return choice;
}
void times()  //to display time
{
    time_t t;
    time(&t);
    printf("\t\t\t\t      %s",ctime(&t));
}
void selection()
{
	menu:
    option=menu();
    switch(option) //use of switch statement to navigate through option available
    {
        case 1:  //for creating new account
        {
        	
        	newaccount();
        	goto menu;
            break;
        }
        case 2: //withdrawing cash from account
        {
        	system("cls");
            printf("\n\n\n");
            space();
            printf("\t\t");
            times();
            withdraw();
            goto menu;
            break;
        }
        case 3: //depositing money in user account
        {
        	system("cls");
            printf("\n\n\n");
            space();
            printf("\t\t");
            times();
            deposit();
            goto menu;
            break;
        }
        case 4:  //account summary
        {
            system("cls");
            printf("\n\n");
            space();
            times();
            summary();
            goto menu;
            break;
        }
        case 5: //exiting program
        {
            exit(1);
            break;
        }
        default:  //default case
        {
            printf("\n");
            space();
            printf("Wrong Choice!!\n");
            space();
            printf("Please Choose Between 1 & 6!!\n");
            space();
            printf("Press Any Key To Continue!!\n\n");
            getchar();
            getchar();
            goto menu;
            break;
        }
    }
}

