// use gets for input and puts to print string
#include<stdio.h>
int main(){
	char s[34];
	printf("enter your name:");
	gets(s);//we can put spaces in b/w but in scanf we cannot
	printf(" your name is ");
    puts(s);//prints the string and put the cursor in nest line
return 0;
}
