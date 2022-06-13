#include<stdio.h>
float converter(int x);
int main(){
	int x;
	printf("enter the temperatue in celcious\n");
	scanf("%d",&x);
	printf("the temp in fharenite is %f", converter(x));
	return 0;
}
float converter(int x){
	float reasult;
	reasult = ((float)x * 9/5) + 32 ;
	return reasult;

}

