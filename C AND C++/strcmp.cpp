#include<stdio.h>
#include<string.h>
int main(){
	char str1[] = "divyanshu";
	char str2[] = " sahu";
	int val = strcmp(str1,str2);// compare string - return 0 if string is equal
	// -1 if 2nd string is big in ascii value and 1 if 1st string is big
	printf("now the val is %d",val);
	return 0;
}
