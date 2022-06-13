/* 
Q2. frank's carpet cleaning service charges 25$ per smaal room and 35$ per big room 
sales tax rate is 6% estimates are valid for 30 days. 
prompt the user for the number of small and big rooms they would like cleaned and provide
an estimate such as: estimate for carpet cleaning service:
number of small rooms:2
number of big rooms:
price per small room: 25$
price per big room: 35$
cost: 85$
tax: 5.1$
total estimate: 90.1$
this estimate is valid for 30 days

pseudo code:
enter the number of small rooms 
enter the number of big rooms 
display number of small and big rooms
display the price per small and big room
disply cost: (no of small rooms*price per small room)+(no of big room*price per big room)
dispay tax: (cost*(tax/100)taxrate)
display total estimate: cost + tax 
dispaly expire time */
#include<iostream>
using namespace std;
int main()
{
	int cost,small_rooms,big_rooms,total_cost;
	float tax;
	const int price_per_small_room(25);
	const int price_per_big_room(35);
	const float tax_rate(.06);
	const int expiry(30);
	cout<<"hellow welcome to our carpet cleaning service"<<endl;
	cout<<"enter the no of small rooms yoou want to clean"<<endl;
	cin>>small_rooms;
	cout<<"enter the no of big rooms yoou want to clean"<<endl;
	cin>>big_rooms;
	cout<<"price of per small room is $"<<price_per_small_room<<endl;
	cout<<"price of per big room is $"<<price_per_big_room<<endl;
	cost = (small_rooms *price_per_small_room) + (big_rooms*price_per_big_room);
	cout<<"your cost is $"<<cost<<endl;
	tax = cost * tax_rate ;
	cout<<"tax on your order is $"<<tax<<endl;
	total_cost = cost+tax;
	cout<<"your total cost is $"<<total_cost<<endl;
	cout<<"this estimate is valid for "<<expiry<<"days"<<endl;
	return 0;
}
	
	
