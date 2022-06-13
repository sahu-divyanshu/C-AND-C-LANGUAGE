#include<stdio.h>
void printarray(int *ptr,int n){
	for(int i=0;i<n;i++){
		printf("the value of %d is %d\n",i+1,*(ptr+i));
	}
}
int main(){
	int arr[]={23,443,5,4632,32};
	printarray(arr,5);
	
	return 0;
}
