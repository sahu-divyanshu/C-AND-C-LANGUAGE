#include<stdio.h>
// array input using loops
int main(){
	int marks [10];
	for(int i=0;i<10;i++){
	printf("enter marks of student %d:\n",i+1);
	scanf("%d",&marks[i]);
	}
	for(int i=0;i<10;i++){
	printf(" marks of student %d is :%d\n",i+1,marks[i]);
	}
	return 0;
}
