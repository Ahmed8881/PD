#include <iostream>
using namespace std;
void discountedPrice (string name, float price);
main(){
	string name;
	cout<<"Enter the country's name: ";
	cin>>name;

	cout<<"Enter the ticket price in dollars: $";
	float price;
	cin>>price;
	
	discountedPrice (name, price);

}
void discountedPrice (string name, float price){ 
	float discount = 0;
	float final_price;

	if (name=="Pakistan"){
 	discount= price* 0.05;}

	if (name=="Ireland"){ 
	discount = price* 0.1; }

	if (name=="India")
	{ discount= price* 0.2;}
 
	if (name== "England")
	{discount = price* 0.3;}

	if (name== "Canada") { 
	discount= price* 0.45;}
 
	final_price = price - discount;
	cout << "Final ticket price after discount: $" << final_price;
}