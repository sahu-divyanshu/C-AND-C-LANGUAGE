// pointer and function in structure
#include<stdio.h>
#include<string.h>
struct employee {
	int code;
	float salary;
	char name[20];
};
void show(struct employee emp){
	printf("the code of employee is: %d\n",emp.code);
	printf("the salary of employee is: %f\n",emp.salary);
	printf("the name of employee is: %s\n",emp.name);
}
int main(){
	struct employee e1;
	struct employee *ptr;
	
	ptr = &e1;
	(*ptr).code = 101;
	// or we can also write
	ptr->code = 101;// array operator replaces value of
	ptr->salary = 101.5;
	strcpy(ptr->name,"harry");
	show(e1);
	// structure ki copy jate hai function me
	return 0;
}
