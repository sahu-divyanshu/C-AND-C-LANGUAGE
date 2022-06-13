#include<iostream>
// uses of cout and cin
using namespace std;

int main()
{
	cout<<"hello world"<<endl;
	
	cout <<"hello";
	cout<<"world"<<endl;
	
	cout<<"hello world"<< endl;
	cout<<"hello"<< " world"<< endl;
	
	cout<<"hello" <<"world\n";
	cout<<"hello\nout\nthere\n";
	
	int num1;
	int num2;
	double num3;
	
	cout <<"enter an inetger";
	cin >>num1;//spaces entered are ignored
	cout<< "you entered:"<<num1<<endl;
	
	
	cout<<"enter the first integer";
	cin>>num1; // if we enter 100     200 then it takes 100 as num1 and 200 as num2
	
	cout<<"enter a second integer";
	cin>>num2;
	
	cout<< "you entered" <<num1<<"and"<<num2<<endl;
	
	
    cout<<"enter 2 integers sepreated with space";
    cin>>num1>>num2;
    cout<<"you entered"<<num1<<"and"<<num2<<endl;
    
    
    cout<< "enter a double";
    cin>>num3;
    cout<<"you entered " <<num3<<endl;
    
    
    cout<<"ebter an integer";
    cin>>num1;
    
    cout<<"enter a double";
    cin>>num3;
    
    cout<<"the integer is"<<num1<<endl;
    cout<<"and fouble is"<<num3<<endl;
     
    return 0;
    
	
}
