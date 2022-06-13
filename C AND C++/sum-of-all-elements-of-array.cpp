#include<stdio.h>
int main(){
	int a[100];
	int i,n,sum=0;
	printf("enter the no of elements you want in array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the %d elements",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	sum = sum + a[i];
    }
	printf("sum = %d",sum);
	
	return 0;
}
