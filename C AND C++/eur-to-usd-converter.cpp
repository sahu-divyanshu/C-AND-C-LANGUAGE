#include<iostream>
using namespace std;
int main ()
{
	const double usd_per_eur(1.19);
	double euro(0.0);
	double usd(0.0);

	cout<<"enter the value of euro you want to convert in usd"<<endl;
	cin>>euro;
	usd = euro*usd_per_eur;
	cout <<euro<<" eoros are equivalent to "<<usd<<" dollar";
}

