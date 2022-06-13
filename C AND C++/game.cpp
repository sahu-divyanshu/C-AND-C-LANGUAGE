#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   int num ,guess,nguesses;
	srand(time(0));
	num=rand()%100 +1;
	//printf("the number is %d",num); // generater random no bw 1 to 100
    
	do {
		printf("guess the number bw 1 to 100\n  ");
		scanf("%d",&guess);
		if(guess>num)
		printf("lower number please\n");
		else if (guess<num)
		printf("higher number please\n ");
		else
		printf("you guess it in %d attempts", nguesses);
		 nguesses++;
	}while(num!=guess);
	return 0;
    
	
}
