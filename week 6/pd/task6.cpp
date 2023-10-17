#include <iostream>
using namespace std;
string calculateHotelPrice(string month, int numberOfStays);
main(){
cout<<"Enter the month (May, June, July, August, September, October): ";
string month;
cin>>month;

cout<<"Enter the number of stays: ";
int numberOfStays;
cin>>numberOfStays;

string result=calculateHotelPrice( month,numberOfStays);
cout<<result;


}


string calculateHotelPrice(string month, int numberOfStays){
float studio;
float apart;
float quantity;
if(month=="May" || month=="October"){
quantity=50;
studio=quantity;
apart=65;
if(numberOfStays>7){
studio=quantity-quantity*0.05;
}

if(numberOfStays>14){
studio=quantity-quantity*0.3;
apart=apart-(apart*0.1);

}
studio=studio*numberOfStays;
apart=apart*numberOfStays;

}




if(month=="June" || month=="September"){
quantity=75.20;
studio=quantity;
apart=68.70;
if(numberOfStays>14){
studio=quantity-(quantity*0.2);
apart=apart-(apart*0.1);
}


studio=studio*numberOfStays;
apart=apart*numberOfStays;

}


if(month=="July" || month=="August"){
quantity=76;
studio=quantity;
apart=77;
if(numberOfStays>14){
apart=apart-(apart*0.1);
}


studio=studio*numberOfStays;
apart=apart*numberOfStays;

}

return "Apartment: " +to_string(apart)+"$.\nStudio: "+to_string(studio)+"$.";


}