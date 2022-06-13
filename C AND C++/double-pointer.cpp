#include<stdio.h>
//double pointer 
int main(){
	int i = 345;
	int *ptr;
	int **ptr2;
	ptr = &i;
	ptr2 = &ptr;
	printf("the value of i is %d",**ptr2); 
	return 0;
}
