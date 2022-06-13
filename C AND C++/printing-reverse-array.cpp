#include<stdio.h>
int main(){
	int i,n,a[100];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements you want to reverse");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse order\n");
	for(i=n;i>0;i--)
	{
		printf("%d ",a[i]);
	} return 0;
}
