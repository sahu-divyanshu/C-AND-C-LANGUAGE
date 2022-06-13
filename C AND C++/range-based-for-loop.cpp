#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
	int scores[]{10,20,30};
	
	for(int score:scores)
		cout<<score<<endl;
		
			
	vector<double>temperatures{87.9,88.8,77.7,72.5};
	double avg{};
	double total{};
	for (auto temp:temperatures)
	total += temp;
	
	
	avg = total/temperatures.size();
	cout<< fixed << setprecision(1);
	cout<< "average temp is"<< avg << endl;
	
	
	for(auto val:{1,2,3,4,5}) 
	cout << val << endl;
	
	
	for(auto c: "this is a test") 
	cout << c;
	
	for(auto c: "this is a test")
	if(c == ' ')
		cout << "\t";
	else  
	cout << c;
	
}
