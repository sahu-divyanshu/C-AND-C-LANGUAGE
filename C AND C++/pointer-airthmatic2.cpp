#include<stdio.h>
int main(){
	char i=34;
	char *ptr =&i;
	printf("the value if ptr is %u\n",ptr);
	ptr++;//increases value by 1 bcoz size of char is 1
	printf("the value if ptr is %u\n",ptr);
	return 0;
}
