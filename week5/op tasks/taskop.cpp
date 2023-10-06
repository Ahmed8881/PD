#include<iostream>

using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

main(){
  printMenu();
  cout << endl;  
  
  while(true){
    int choice;
    cout << endl << "Do you want to calculate the Aggregate(1) or Compare two Students(2) (press '1' or '2'): ";
    cin >> choice;

    if (choice == 1){
      string name;
      float matricMarks, interMarks, ecatMarks;
    
      cout << "Enter name of the Student: ";
      cin >> name;
   
      cout << "Enter marks obtained in Matric: ";
      cin >> matricMarks; 

      cout << "Enter marks obtained in Inter: ";
      cin >> interMarks;

      cout << "Enter marks obtained in ECAT: ";
      cin >> ecatMarks;

      calculateAggregate(name, matricMarks, interMarks, ecatMarks);
}


  
    if (choice == 2){
      string nameStd1, nameStd2;
      int ecatMarksStd1, ecatMarksStd2;
   
      cout << "Enter name of the first Student: ";
      cin >> nameStd1;

      cout << "Enter Ecat Marks: ";
      cin >> ecatMarksStd1;

      cout << "Enter name of the second Student: ";
      cin >> nameStd2;

      cout << "Enter Ecat Marks: ";
      cin >> ecatMarksStd2;

      compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);

}

}

}

void printMenu(){ 
  cout                                                     << endl;
  cout << "        ##    ##        ######        ######  " << endl;
  cout << "        ##    ##        ##              ##    " << endl;
  cout << "        ##    ##        #####           ##    " << endl;
  cout << "        ##    ##        ##              ##    " << endl;
  cout << "        ########        ######          ##    " << endl;
  cout                                                     << endl;
  cout << "         A D M I S S I O N    S Y S T E M     " << endl;

}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks){
  float aggregate;
  aggregate = (matricMarks / 1100 * 30) + (interMarks / 550 * 30) + (ecatMarks / 400 * 40);
  cout << "Aggregate for the candidate " << name << " is: " << aggregate << "%" << endl; 

}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2){
  int std1Roll, std2Roll;

  if (ecatMarksStd1 >= ecatMarksStd2){
     std1Roll = 1;
     std2Roll = 2;
}

  if (ecatMarksStd1 < ecatMarksStd2){
     std2Roll = 1;
     std1Roll = 2;    
} 
  cout << "Roll Number of " << nameStd1 << " is: " << std1Roll << endl;
  cout << "Roll Number of " << nameStd2 << " is: " << std2Roll << endl;   

}