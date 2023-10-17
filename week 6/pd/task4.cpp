#include<iostream>
using namespace std;
string type(char code);
float amount(char time, int min,char code);
main(){
	cout<<"Enter the service code (R/r for regular, P/p for premium): ";
	char code;
	cin>>code;
	char time;
if(code=='p' || code=='P'){
	cout<<"Enter time of the call (D/d for day, N/n for night): ";
	cin>>time;
	
}


	cout<<"Enter the number of minutes used: ";
	int min;
	cin>>min;

	string output1=type(code);
	cout<<"Service Type: "<<output1<<endl;
	cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
	float output2=amount(time, min,code);
	cout<<"Amount Due: $"<<output2;
	
}
string type(char code){
	string type;
if(code=='p' || code=='P'){
	type="Premium";
}
if(code=='r' || code=='R'){
	type="Regular";
}
	return type;

}
float amount(char time, int min,char code){
float minutes=min;
if(code=='r' || code=='R'){
if(minutes>50){
minutes=min-50;
minutes=minutes*0.20;
minutes=minutes+10;
}
else{
minutes=10;
}
}
if(code=='p'|| code=='P'){
if(time=='d'|| time=='D'){
if(minutes>75){
minutes=min-75;
minutes=minutes*0.1;
minutes=minutes+25;
}
}
else{
minutes=25;
}
if(time=='n'|| time=='N'){
if(minutes>100){
minutes=min-100;
minutes=minutes*0.1;
minutes=minutes+25;
}
}
else{
minutes=25;
}
}
return minutes;

}






