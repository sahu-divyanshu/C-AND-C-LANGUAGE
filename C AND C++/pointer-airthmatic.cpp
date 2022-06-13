#include<stdio.h>
int main(){
	int i=34;
	int *ptr =&i;
	printf("the value if ptr is %u\n",ptr);
//	ptr++;=ptr +1
//	ptr++; increases value by 4 bcoz size of int is 4 byte 
	ptr--;//decreases value by 4
	printf("the value if ptr is %u\n",ptr);
	return 0; 
}
