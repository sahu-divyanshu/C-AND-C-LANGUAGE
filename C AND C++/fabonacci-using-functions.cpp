#include<stdio.h>
int fabonacci(int n);

int main(){
	int num;
	printf("no of terms to print in fabonacci series\n");
	scanf("%d",& num);
	printf("fabonacci series",fabonacci);
	return 0;
}
int fabonacci(int n){
	if(n<2){
	return n;
	} 
else{
	return fabonacci(n-1) + fabonacci(n-2);
	}
}
