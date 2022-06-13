//call by value
#include<stdio.h>
int sum(int a,int b);
int main(){
	int a=4,b=7;
	printf("the value of a and b is %d and %d \n ",a,b);
	printf("the value of 4+7 is %d \n",sum(a,b));
	printf("the value of a and b is %d and %d \n ",a,b);
	return 0;
}
int sum(int a,int b){
	int c;
	c= a+b;
	a=543;//we cant change the variables of main through/in a function
	b=456;//values ko copy karke use me leta hai funtion
	return c;
}
