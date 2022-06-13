//factorial using function
#include<stdio.h>
int factorial(int);
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int fact = factorial(n);
	printf("the factorial is %d",fact);
	return 0;
} 
int factorial(int n){
	int val = 1;
	for (int i = n;i > 1;i--){
		val = val*i;
	}
	return val;
}
