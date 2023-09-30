#include<iostream>
using namespace std;
void longestduration(int h, int m);

main(){
	cout<<"Enter the number of hours: ";
	int h;
	cin>>h;

	cout<<"Enter the number of minutes: ";
	int m;
	cin>>m;

	longestduration(h, m);

}
void longestduration(int h, int m){
	if(h*60>m){
	cout<<h;
}
	if(h*60<m){
	cout<<m;
}


}