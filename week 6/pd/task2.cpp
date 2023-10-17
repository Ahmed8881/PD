#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry,float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main(){
	cout<<"Enter student name:";
	string name;
	cin>>name;

	cout<<"Enter marks for English:";
	float marksEnglish;
	cin>>marksEnglish;

	cout<<"Enter marks for Maths:";
	float marksMaths;
	cin>>marksMaths;


	cout<<"Enter marks for Chemistry:";
	float marksChemistry;
	cin>>marksChemistry;


	cout<<"Enter marks for Social Science:";
	float marksSocialScience;
	cin>>marksSocialScience;

	cout<<"Enter marks for Biology:";
	float marksBiology;
	cin>>marksBiology;

	cout<<"Student name: "<<name<<endl;
	float result1= calculateAverage( marksEnglish, marksMaths,  marksChemistry, marksSocialScience, marksBiology);
	cout<<"Percentage: "<<result1<<"%"<<endl;
	float average;
	string result2=calculateGrade(average);
	cout<<"Grade: "<<result2;

}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry,float marksSocialScience, float marksBiology ){
	float average=((marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/500)*100;
	return average;
}
string calculateGrade(float average){
	string grade;

if(average>=90 ) {
	grade="A+";
return grade;
}

 if(average>=80 && average<90){
	grade="A";
return grade;
}
 if(average>=70 && average<80){
	grade="B+";
return grade;
}
 if(average>=60 && average<70){
	grade="B";
return grade;
}
 if(average>=50 && average<60){
	grade="C";
return grade;
}
if(average>=40 && average<50){
	grade="D";
return grade;
}
if( average<40){
	grade="F";


return grade;
}


}



