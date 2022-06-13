//typedef kewword - commnly used in structures but we can use it at many places
#include<stdio.h>
#include<string.h>
typedef struct employee {
	int code;
	float salary;
	char name[20];
}emp;//changes name of datatype(custom datatype)
void show(emp emp1){
	printf("the code of employee is: %d\n",emp1.code);
	printf("the salary of employee is: %f\n",emp1.salary);
	printf("the name of employee is: %s\n",emp1.name);
}
int main(){
	emp e1;
	emp *ptr;
	
	ptr = &e1;
	ptr->code = 101;
	ptr->salary = 101.5;
	strcpy(ptr->name,"harry");
	show(e1);
	
	return 0;
}
