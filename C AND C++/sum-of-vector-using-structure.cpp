// sum of vector
#include<stdio.h>
struct vector{
	int x;
	int y;
	
};
struct vector sumvector(struct vector v1, struct vector v2){
	struct vector reasult;
	reasult.x = v1.x +v2.x;
	reasult.y = v1.y +v2.y;
	return reasult;
}
int main(){
	struct vector v1,v2,sum;
	v1.x = 34;
	v1.y =44;
	printf("x dimension is %d and y dimension is %d\n",v1.x,v1.y);
	v2.x = 23;
	v2.y = 24;
	printf("x dimension is %d and y dimension is %d\n",v2.x,v2.y);
	sum = sumvector(v1,v2);
	printf("x dimension of reasult is %d and y dimension is %d",sum.x,sum.y);
	return 0;
}
