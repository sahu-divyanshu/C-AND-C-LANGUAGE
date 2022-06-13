//vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char>vowels;//empty
	vector<char>vowels(5);//all 5 elements are initialise to zero
	vector <char> vowels{'a','e','i','o','u'};
	cout<<vowels[0]<<endl;
	cout<<vowels[4]<<endl;
	
	vector<int>test_score(3);//3 elements & all initialized to zero
	vector<int>test_score(3,100);//3 elements & all initialized to 100
	
	vector<int>test_score{100,99,98};
	
	cout<<"test score using array syntax"<<endl;
	cout<<test_score[0]<<endl;
	cout<<test_score[1]<<endl;
	cout<<test_score[2]<<endl;
	
	cout<<"test score using vector syntax"<<endl;
	cout<<test_score.at(0)<<endl;
	cout<<test_score.at(1)<<endl;
	cout<<test_score.at(2)<<endl;
	cout<<"there are"<<test_score.size()<<"scores in the  vectors"<<endl;
	
	cout<<"enter 3 test score";
	cin>>test_score.at(0);
	cin>>test_score.at(1);
	cin>>test_score.at(2);
	
	cout<<"updated test score"<<endl;
	cout<<test_score.at(0)<<endl;
	cout<<test_score.at(1)<<endl;
	cout<<test_score.at(2)<<endl;
	 
	
	
	
}