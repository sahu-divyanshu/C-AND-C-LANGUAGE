//create a 2d array by taking input from user and write a display function to print
// the content of 2d array on screen
#include<stdio.h>
int display(int n_rows,int n_columns,int matrix[n_rows][n_columns]);
int main(){
	int n_rows,n_columns;
	printf("enter the no. of rows and columns respectively\n");
	scanf("%d%d",&n_rows,&n_columns);
	int matrix[n_rows][n_columns];
	for(int i=0;i<n_rows;i++){
		for(int j=0;j<n_columns;j++){
			printf("enter the %d element of %d row\n",j+1,i+1);
		scanf("%d",&matrix[i][j]);
	}
	}
	int display;
	return 0;
}
int display(int n_rows,int n_columns,int matrix[n_rows][n_columns]){
	for(int i=0;i<n_rows;i++){
		for(int j=0;j<n_columns;j++){
			printf("the %d element of %d row\n",j+1,i+1);
	}
	}
}
