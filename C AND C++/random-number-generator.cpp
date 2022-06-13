#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
	int num;
	srand(time(0));
	num=rand()%100 +1;
	printf("the number is %d",num); // generater random no bw 1 to 100
    return 0;
    
	
}
