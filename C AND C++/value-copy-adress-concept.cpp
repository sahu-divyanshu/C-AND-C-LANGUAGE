#include<stdio.h>
void printadd(int a){
	printf("the adress of a is %u",&a);
}
int main(){
	int i=4;
	printf("the value of i is %d \n",i);
	printadd(i);//yaha value pass kari hai ,yeh value function me copy hogi toh uska adress diff ayega
	printf("the adress of i is %u",&i);
	
	return 0;
}
