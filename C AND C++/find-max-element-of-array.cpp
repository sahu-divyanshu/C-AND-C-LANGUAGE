// largest element in array
#include<stdio.h>
int returnmax(int array[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if (array[i]>max)
		max = array[i];
	} return max;
}
int main(){
	int arr[] = {1,2,3,4,3423,423,24};
	int max = returnmax(arr,7);
	printf("the maximum elemenet in this array is %d",max);
	return 0;
}
