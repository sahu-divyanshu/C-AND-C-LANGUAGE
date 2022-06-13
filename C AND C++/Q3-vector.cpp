#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// Q1. declare 2 empty vectors of integer type ,named vector1 and vector2
	vector<int>vector1;
	vector<int>vector2;
	
	//Q2. add 10 and 20 to vector1 using pushback
	vector1.push_back(10);
	vector1.push_back(20);
	
	//Q3. display the elements in vector1 using at method & size using size() method
	cout<<"vector1:"<<endl;
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;
	cout<<"vector1 contains"<<vector1.size()<<"elements"<<endl;
	
	//Q4. add 100 and 200 to vector2 using push_back
	vector2.push_back(100);
	vector2.push_back(200);
	
	//Q5. display the elements in vector2 using at method & size using size() method
	cout<<"vector2"<<endl;
	cout<<vector2.at(0)<<endl;
	cout<<vector2.at(1)<<endl;
	cout<<"vector2 contains"<<vector2.size()<<"elements"<<endl;
	
	//Q6. declare an empty 2d vector of int type called vector_2d
	vector <vector<int> > vector_2d;
	
	//Q7. add vector1 and vector2 to vector_2d using push_back
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	//Q8. display the elements in vector_2d using the at() method
	cout<<"vector_2d"<<endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	//Q9. change vector1.at(0) to 1000
	vector1.at(0)=1000;
	//this will not change 2d vector's element because 2d vector takes a copy
	//lets chack it
	 
	//Q10. display the elements in vector_2d again 	
	cout<<"vector_2d"<<endl;
	cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
	
	//Q11. display the element in vector1
	cout<<"vector1:"<<endl;
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;
	cout<<"vector1 contains"<<vector1.size()<<"elements"<<endl;
	 
	//as you can see 1000 is not present in vector_2d and present in vector1
	
	
}
