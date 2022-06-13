//srting function - strlen
#include<stdio.h>
#include<string.h>
int main(){
	char *str="divyanshu";
	int a = strlen(str);// gives length excluding the null character
	printf("the length of string is %d",a);	
	return 0;
}
