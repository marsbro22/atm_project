
//number of inpt addition
#include<stdio.h>
//int - data type
//add -function name
//()  argument
//;decler line terminate
//decleration for identification for main  
int add();                //with return without arg

int main()
{
    int time=1,array_value[100],i=0;             // is use for number of time we need to excicute the program  (flag)
	while(time==1)
	{
		//calling function 
		array_value[i]=add();                  //calling and save the return value to the array_value         
		printf("the value of add state : %d\n",array_value[i]);
		printf("1 - contin\t 0 - exit");
	    scanf("%d",&time);                     //terminate the loop
	    i++;                                   //for increement the indux value of array
	}
	return 0;
}
//define - function work
//set of statement
//() for argument
int add()
{
	//within {} will denote local decleration and its life only within it
	int number_data,value[50],result=0;           							 //within a block local decleration
	// value[50] maximm 50 value only u add 
	printf("how many number of data  going to add : ");  // for ser identification
	scanf("%d",&number_data);
	for(int i=0;i<number_data;i++)
	{
	scanf("%d",&value[i]);
	result+=value[i];
	
	
}
return result;
}