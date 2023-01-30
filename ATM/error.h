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
