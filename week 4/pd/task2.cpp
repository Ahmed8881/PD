#include <iostream>
using namespace std;
void printc(string c);
main(){
	string condition;
	cout<<"Enter 'true' or 'false': "<<condition;
	cin>>condition;
	printc(condition);


}
void printc(string c){
if(c=="true"){
	cout<<"false";
}
if(c=="false"){
	cout<<"true";

}
}	




	




