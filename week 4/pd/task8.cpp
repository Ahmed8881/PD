#include<iostream>
using namespace std;
void pet(int holidays);
main(){
	cout<<"Holidays: ";
	int holidays;
	cin>>holidays;
	pet(holidays);

}
void pet(int holidays){
	int working_days,total_min,difference;
	
	working_days=365-holidays;
	total_min=working_days*63+holidays*127;
	difference=30000-total_min;
if(difference>=0){
	cout<<"Tom sleeps well"<<endl;
	cout<<difference/60<<" hours and "<<difference%60<<" minutes less for play";}

if(difference<0){
	cout<<"Tom will run away"<<endl;
	difference=-difference;
	cout<<difference/60<<" hours and "<<difference%60<<" minutes for play";}
}