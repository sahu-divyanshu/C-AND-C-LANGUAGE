// table of 2,7,9
#include<stdio.h>
int main(){
	int multable[3][10];
	for(int i=0;i<10;i++){
		multable[0][i]= 2*(i+1);	
	}
	for(int i=0;i<10;i++){
		printf("2 X %d =%d\n",i+1,multable[0][i]);
		
	}
	for(int i=0;i<10;i++){
		multable[0][i]= 7*(i+1);	
	}
	for(int i=0;i<10;i++){
		printf("7 X %d =%d\n",i+1,multable[0][i]);
		
	}
	for(int i=0;i<10;i++){
		multable[0][i]= 9*(i+1);	
	}
	for(int i=0;i<10;i++){
		printf("9 X %d =%d\n",i+1,multable[0][i]);
		
	}return 0;
}
