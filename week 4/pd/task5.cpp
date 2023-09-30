#include <iostream>
using namespace std;
void possibleBonus(int p1, int p2);
main(){
	cout<<"Enter your position: ";
	int p1;
	cin>>p1;

	cout<<"Enter your friend's position: ";
	int p2;
	cin>>p2;

	possibleBonus(p1, p2);



}
	void possibleBonus(int p1, int p2){
	int x;
	x=p2-p1;
if(x<=6){
	cout<<"true";

} 
if(x>6){
	cout<<"false";



}}