
//number of inpt addition in without return with arugument
#include<stdio.h>
//int - data type - return 
//void  data type - no return 
//add -function name
//()  argument
//;decler line terminate
//decleration for identification for main  
void add(int);                //with return without arg  (int ) denote the number of arg u sent(int,char)
int time=1,result;
int main()
{
    int array_value[100],i=0,number_data=0;             // is use for number of time we need to excicute the program  (flag)
	//float time=5;
	while(time==1)
	{    
	    printf("how many number of data  going to add : ");  // for ser identification
	    scanf("%d",&number_data);
		//calling function 
		add(number_data);                  //calling and save the return value to the array_value         
		printf("the value of add state : %d\n",result);
		array_value[i]=result;
		printf("1 - contin\t 0 - exit");
	    scanf("%d",&time);                     //terminate the loop
	    i++;                                   //for increement the indux value of array
	}
	for(int j=0;j<i;j++)
	printf("%d \n",array_value[j]);
	//return 0;
}




//define - function work
//set of statement
//() for argument
void add(int data)           //value of number_data perameter
{
	//within {} will denote local decleration and its life only within it
	int number_data,value[50];           							 //within a block local decleration
	// value[50] maximm 50 value only u add 
	time=0;
	for(int i=0;i<data;i++)
	{
	scanf("%d",&value[i]);
	result+=value[i];
}
    //printf("the value of add state : %d\n",result);
//return result;
}