#include<stdio.h>
int main(){
	int i=8;
	int *j=&i;
	printf("the value if i is %d \n",*j);
	printf("the adress of i is %u \n",&i);//=value of j
	printf("the adress of j is %u \n",&j);
	printf("the value of j is %u \n",*(&j));//onr more way	
	
	return 0;
}
