#include<stdio.h>
float force(float mass);

int main(){
	int m;
	printf("enter the value of mass in kgs\n");
	scanf("%d",&m);
	printf("the value of force in newton is %f \n",force(m));
	return 0;

}
float force(float mass){
	float reasult = mass * 9.8;
	return reasult;
}
