#include<stdio.h>
// function prototype
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
	goodmorning();
	return 0;
} 
// function defination
void goodmorning(){
	printf("good morning ds\n");
    goodafternoon();
}
void goodafternoon(){
	printf("good afternoon ds\n");
	goodnight();
}
void goodnight(){
	printf("good night ds\n");
}
 
