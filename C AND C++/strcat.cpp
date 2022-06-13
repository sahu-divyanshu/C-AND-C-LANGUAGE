#include<stdio.h>
#include<string.h>
int main(){
	char str1[] = "divyanshu";
	char str2[] = " sahu";
	strcat(str1,str2);// joins the str1 and str2 in str1 and str2 remains unchanged
	puts(str1);
	puts(str2);
	return 0;
}
