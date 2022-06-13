#include<iostream>
using namespace std;
int main()
{
	int num1(10);
	int num2(20);
	num1 = num2 = 1000; // same value is assigned to both
	cout<<"num1 is" << num1<<endl;
	cout<<"num2 is" << num2<<endl;
	
	num1 = num2 ; //2nd ki value 1st me aa jayegi
	cout<<"num1 is" << num1<<endl;
	cout<<"num2 is" << num2<<endl;
	
	cout<<endl;
	return 0;
}
