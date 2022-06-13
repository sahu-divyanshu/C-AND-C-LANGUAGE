#include<stdio.h>
// function prototype
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
	goodmorning();
	goodafternoon(); // function call
	goodnight();
	return 0;
} 
// function defination
void goodmorning(){
	printf("good morning ds\n");

}
void goodafternoon(){
	printf("good afternoon ds\n");

}
void goodnight(){
	printf("good night ds\n");
}
 
