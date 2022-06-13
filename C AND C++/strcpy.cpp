#include<stdio.h>
#include<string.h>
int main(){
	char str[] = "this";
	char str2[45];
	strcpy(str2,str);// copy str in str2
	printf("now the str 2 is %s",str2);
	return 0;
}
