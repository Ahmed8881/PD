#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
main(){
	cout<<"Enter the fruit name: ";
	string fruit;
	cin>>fruit;

	cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
	string dayOfWeek;
	cin>>dayOfWeek;

	cout<<"Enter the quantity: ";
	double quantity;
	cin>>quantity;
	
	float output=calculateFruitPrice(fruit,dayOfWeek,quantity);
if(dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"|| dayOfWeek == "Saturday" || dayOfWeek == "Sunday"){
cout<<output;
}	

if(dayOfWeek != "Monday" || dayOfWeek != "Tuesday" || dayOfWeek != "Wednesday" || dayOfWeek != "Thursday" || dayOfWeek != "Friday"|| dayOfWeek != "Sunday" || dayOfWeek != "Saturday"){

cout<<"error";
}}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float cost;
    
    if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
    {
        if (fruit == "banana")
            cost = quantity * 2.70;

        else if (fruit == "apple")
            cost = quantity * 1.25;

        else if (fruit == "orange")
            cost = quantity * 0.90;

        else if (fruit == "grapefruit")
            cost = quantity * 1.60;

        else if (fruit == "kiwi")
            cost = quantity * 3.00;

        else if (fruit == "pineapple")
            cost = quantity * 5.60;

        else if (fruit == "grapes")
            cost = quantity * 4.20;
        
       
    }

    else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"  )
    {
        if (fruit == "banana")
            cost = quantity * 2.50;

        else if (fruit == "apple")
            cost = quantity * 1.20;

        else if (fruit == "orange")
            cost = quantity * 0.85;

        else if (fruit == "grapefruit")
            cost = quantity * 1.45;

        else if (fruit == "kiwi")
            cost = quantity * 2.70;

        else if (fruit == "pineapple")
            cost = quantity * 5.50;

        else if (fruit == "grapes")
            cost = quantity * 3.85;
        
        
    }

    return cost;
}
    

