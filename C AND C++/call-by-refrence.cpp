//call by refrence
#include<stdio.h>
int swap(int *a,int *b);
int wrong_swap(int a,int b);
int main(){
	int x=3 ,y=4;
	printf("the value of x and y before swap is %d and %d\n",x,y);
	wrong_swap(x,y);//will not work due to call by value
	swap(&x,&y);//will work due to call by refrence
	printf("the value of x and y after swap is %d and %d\n",x,y);
	
	return 0;
}
int wrong_swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
