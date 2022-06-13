/* 
Q1. frank's carpet cleaning service charges 30 $ per room sales tax rate is 6%
estimates are valid for 30 days. 
prompt the user for the number of rooms they would like cleaned and provide an estimate
such as: estimate for carpet cleaning service:
number of rooms:2
price per room: 30$
cost: 60$
tax: 3.6$
total estimate: 63.6$
this estimate is valid for 30 days

pseudo code:
enter the number os rooms 
display number of rooms
display the price per room
disply cost: (no of rooms*price per room)
dispay tax: (cost*(tax/100)taxrate)
display total estimate: cost + tax 
dispaly expire time */
#include<iostream>
using namespace std;
int main()
{
	int cost,rooms,total_cost;
	float tax;
	const int price_per_room(30);
	const float tax_rate(.06);
	const int expiry(30);
	cout<<"hellow welcome to our carpet cleaning service"<<endl;
	cout<<"enter the no of rooms yoou want to clean"<<endl;
	cin>>rooms;
	cout<<"price of per room is $"<<price_per_room<<endl;
	cost = rooms *price_per_room;
	cout<<"your cost is $"<<cost<<endl;
	tax = cost * tax_rate ;
	cout<<"tax on your order is $"<<tax<<endl;
	total_cost = cost+tax;
	cout<<"your total cost is $"<<total_cost<<endl;
	cout<<"this estimate is valid for "<<expiry<<"days"<<endl;
	return 0;
}
	
	
