// print a pattern 
//  00000
//   1111
//    222
//     33
//      4
#include<stdio.h>
int main(){
	int n = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>=i){
				printf("%d",i);
			}
			else{
				printf(" ");
			}
		} 
		printf("\n");
	}
	return 0;
}
