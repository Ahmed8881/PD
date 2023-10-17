#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main(){
cout<<"Enter the day of birth: ";
int day;
cin>>day;

cout<<"Enter the month of birth (e.g., January, February): ";
string month;
cin>>month;

string result=findZodiacSign(day,month);
cout<<"Zodiac Sign: "<<result;



}
string findZodiacSign(int day, string month){
string sign;
if((month=="March" && day>=21) ||(month=="April" && day<=19 )){
sign="Aries";
}

if((month=="April" && day>=20) ||(month=="May" && day<=20 )){
sign="Taurus";
}

if((month=="May" && day>=21) ||(month=="June" && day<=20 )){
sign="Gemini";
}

if((month=="June" && day>=21) ||(month=="July" && day<=22 )){
sign="Cancer";
}

if((month=="July" && day>=23) ||(month=="August" && day<=22 )){
sign="Leo";
}

if((month=="August" && day>=23) ||(month=="September" && day<=22 )){
sign="Virgo";
}

if((month=="September" && day>=23) ||(month=="October" && day<=22 )){
sign="Libra";
}
if((month=="October" && day>=23) ||(month=="November" && day<=21 )){
sign="Scorpio";
}

if((month=="November" && day>=22) ||(month=="December" && day<=21 )){
sign="Sagittarius";
}

if((month=="December" && day>=22) ||(month=="January" && day<=19 )){
sign="Capricorn";
}

if((month=="January" && day>=21) ||(month=="February" && day<=18 )){
sign="Aquarius";
}
return sign;

}