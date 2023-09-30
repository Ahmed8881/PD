#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main(){

	cout<<"Number of people in the household: ";
	int people;
	cin>>people;

	cout<<"number of rolls of TP: ";
	int tp;
	cin>>tp;

	tpChecker(people, tp);
}

void tpChecker(int people, int tp){
	int sheet;
	sheet=tp*500;
	int consume;
	consume=people*57;
	int days;
	days=sheet/consume;
if(days>=14){
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
}
if(days<14){
	cout<<"Your TP will only last "<<days<<" days, buy more!";

}



}