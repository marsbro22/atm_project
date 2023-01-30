add sub mul div mod 6 exit










#include<stdio.h>
int c;
int manfree();              //without argument with return 
void manfree1(int,int);     //with argument with out return
int main()
{
//	int result;
//	result=manfree();
//	result+=10;
//	printf("%d",c);
//    //printf("%d",result);
manfree1(5,6);
}
int manfree()
{
	int value1,value2;
	printf("enter the value for add");
	scanf("%d%d",&value1,&value2);
	c=value1+value2;
	return value1+value2;
}
void manfree1(int value1,int value2)
{
	printf("the addition resut of value1 & value2 is : %d",value1+value2);
}