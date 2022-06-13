// prime numbers in a given range using function
int isprime(int);
#include<stdio.h>
int main(){
	int n1,n2;
	printf("enter first number\n");
	scanf("%d",&n1);
	printf("enter second number\n");
	scanf("%d",&n2);
	printf("prime number between %d and %d are: ",n1,n2);
	for(int i=n1;i<n2;i++)
	{	
		if(isprime(i)){
			printf("%d ,",i);
		}
	}
	return 0;
}
int isprime(int n){
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0){
			return 0;
		}	
		
	} 
		return 1;
}
