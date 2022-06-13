#include<stdio.h>
int sum(int a,int b);
int main(){
	sum(2,5);
	sum (10,3);
	return 0;
}
int sum(int a, int b){
	int ans;
	ans = a+b ;
	printf("sum =%d",ans);
}
