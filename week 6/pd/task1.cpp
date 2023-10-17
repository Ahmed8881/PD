#include<iostream>
using namespace std;
string decideActivity(string temperature, string humidity);
main(){

cout<<"Enter temperature (warm or cold): ";
string temperature;
cin>>temperature;

cout<<"Enter humidity (dry or humid): ";
string humidity;
cin>>humidity;

string result= decideActivity(temperature,humidity);
cout<<"Recommended activity: "<<result;
}
string decideActivity(string temperature, string humidity){
string activity;
if(temperature=="warm" && humidity=="dry"){
activity="Play tennis";
}
if(temperature=="warm" && humidity=="humid"){
activity="Swim";
}
if(temperature=="cold" && humidity=="dry"){
activity="Play basketball";
}
if(temperature=="cold" && humidity=="humid"){
activity="Watch TV";
}
return activity;

}