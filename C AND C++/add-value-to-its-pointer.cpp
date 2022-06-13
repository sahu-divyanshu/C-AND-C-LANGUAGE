#include<stdio.h>
//adding pointer to a its value
int main(){
	int d =10;
	int *p=&d;
	printf("sum of %d and %u is %d",d,p,d+p);
	return 0;
}
