task 1


#include <iostream>
using namespace std;
int value1=10;
int value2=20;
int sum()	

main(){
int x= value1;
value1=100;
x=20;
value2=sum();
cout<<value1<<" "<<value2;
sum();
}

int sum(){

	value1=40;
	return value1 = value2;
}



task 2


float volume (float l,float w, float h, string unit)
{
	float result=(l*w*h)/3;
	if(unit=="millimeters"){
result=result*10000000000;
}
if(unit=="centimeters"){
result=result*1000000;
}
if(unit=="kilometers"){
result=result/1000000000;
}
return result;
}



tASK 3



float taxCalculator(char code,float price){
	int rate;


if(code=='M' ){
	rate=6;
}
if(code=='E'){
	rate=8;
}
if(code=='S'){
	rate=10;
}
if(code=='V'){
	rate=12;
}
if(code=='T'){
	rate=15;
}
	int tax=price*(rate*0.01);
	int finalp=price+(tax);
	return finalp;
}





TASK 4

 string projectTimeCalculation(int hoursneeded, int days, int workers)
{
	int workingtime;
	int trainingtime;
	int hoursleft;
	workingtime=workers*10*days;
	trainingtime=workingtime*0.1;
	hoursleft=hoursneeded-workingtime+trainingtime;
if((workingtime+trainingtime)<=hoursneeded){
	
	return "Not enough time! "+to_string(hoursleft)+ " hours needed.";
}
if((workingtime+trainingtime)>hoursneeded)
{
	

	return "Yes!"+to_string(-hoursleft)+" hours left.";
	

}

}#include<iostream>
#include<windows.h>
using namespace std;
void name();
void welcome();
void user();
void reason();
void user_choice(int choice);
void gotoxy(int x, int y);
main(){
system("cls");
name();
welcome();
user();
reason();





}
void name()
{system("Color 2");	
	
	gotoxy(20, 5);
	cout<<"#############################################################################################"<<endl;
	gotoxy(20, 6);
	cout<<"##                                                                                         ##"<<endl;
	gotoxy(20, 7);
	cout<<"##    #########        #########  ######### ##########    ##########  ##########           ##"<<endl;
	gotoxy(20, 8);
	cout<<"##    #                #      ##  #       #          ##   #        #  #       ##           ##"<<endl;
	gotoxy(20, 9);
	cout<<"##    #                #      ##  #       #          ##   #        #  #       ##           ##"<<endl;
	gotoxy(20, 10);
	cout<<"##    #                #      ##  #       #        ##     #        #  #      ##            ##"<<endl;
	gotoxy(20, 11);
	cout<<"##    ######### -----  #      ##  #########      ##       ##########  #######              ##"<<endl;
	gotoxy(20, 12);
	cout<<"##    #                # ######   #       #    ##         #        #  #    ##              ##"<<endl;
	gotoxy(20, 13);
	cout<<"##    #                #      ##  #       #   ##          #        #  #     ##             ##"<<endl;
	gotoxy(20, 14);
	cout<<"##    #                #      ##  #       #  ##           #        #  #     ##             ##"<<endl;
	gotoxy(20, 15);
	cout<<"##    #                #      ##  #       # ##            #        #  #      ##            ##"<<endl;
	gotoxy(20, 16);
	cout<<"##    #########        #########  #       #  ##########   #        #  #                    ##"<<endl;
	gotoxy(20, 17);
	cout<<"##                                                                                         ##"<<endl;
	gotoxy(20, 18);
	cout<<"#############################################################################################"<<endl;



}

void welcome(){
	
	gotoxy(20,19);
	cout<<"                                                               "<<endl;
	gotoxy(20,20);
	cout<<"								      "<<endl;
	gotoxy(20,21);
	cout<<"								      "<<endl;
	gotoxy(20,22);
	cout<<"                                                               "<<endl;
	gotoxy(20, 23);
    	cout << "       #        ####       ####    #####  ##   #           " << endl;
    	gotoxy(20, 24);
    	cout << "       #       ##  ##    ##    ##    #    ###  #           " << endl;
    	gotoxy(20, 25);
    	cout << "       #       #    #   ##           #    #### #           " << endl;
    	gotoxy(20, 26);
    	cout << "       #       #    #  ##    ###     #    #  ###           " << endl;
    	gotoxy(20, 27);
    	cout << "       #       ##  ##   ##    ##     #    #   ##           " << endl;
    	gotoxy(20, 28);
    	cout << "       ######   ####     #####     #####  #    #           " << endl;
	gotoxy(20, 29);
    	cout << "-----------------------WELCOME TO E-BAZAR----------------- " << endl;
	gotoxy(20,30);
	cout<<"                                                               "<<endl;

}
void user(){
	gotoxy(20,31);
	cout<<" ENTER YOUR NAME:  ";
	string name;
	cin>>name;
	gotoxy(20,32);
	cout<<" ENTER YOUR PASSWORD: ";
	string password;
	cin>>password;
if(name=="Ahmed" && password=="123A"){
gotoxy(20,33);
cout<<"Welcome Ahmed..."<<endl;

}
if(name=="Munees" && password=="123B"){
gotoxy(20,34);
cout<<"Welcome Munees..."<<endl;
}
if(name== "Ali" && password=="123C"){
gotoxy(20,35);
cout<<"Welcome Ali..."<<endl;
}
if(name=="Wali" && password=="123D"){
gotoxy(20,36);
cout<<"Welcome Wali..."<<endl;
}	
}
void reason(){
	gotoxy(20,37);
	cout<<"Enter Buy or sale if  you want to buy or sale products: ";
	string enter;
	cin>>enter;
	
if(enter=="buy"){
	gotoxy(20,38);
	cout<<"Choose the product you want to buy:"<<endl;
	gotoxy(20,39);
	cout<<"For home appliances enter 1"<<endl;
	gotoxy(20,40);
	cout<<"For mobiles and lapptops enter 2"<<endl;
	gotoxy(20,41);
	cout<<"For Furniture enter 3"<<endl;	
	gotoxy(20,42);
	cout<<"For books enter 4"<<endl;
	gotoxy(20,43);
	cout<<"Enter choice.....";

	int choice;
	cin>>choice;
	user_choice(choice);

}
if(enter=="sale"){
	gotoxy(20,44);
	cout<<"Will be Available in new version......thank you ";
}
}
	
void user_choice(int choice){
if(choice==1){
	gotoxy(20,44);
	cout<<"############################################################################################### "<<endl;
	gotoxy(20,45);
	cout<<"                                                  #                                           # "<<endl;
	gotoxy(20,46);
	cout<<"       ____________________                       #     ___________________________           # "<<endl;
	gotoxy(20,47);
	cout<<"      |   REFRIGERATOR     |                      #    |  _______________________  |          # "<<endl;
	gotoxy(20,48);
	cout<<"      |         |          |    Refrigerator      #    | |                       | |          # "<<endl;
	gotoxy(20,49);	
	cout<<"      |  _____  |  ________|                      #    | |                       | |          # "<<endl;
	gotoxy(20,50);
	cout<<"      | |     | | | 21°C   |  price=$100         #    | |                       | |          # "<<endl;
	gotoxy(20,51);
	cout<<"      | |     | | |________|                      #    | |                       | |          # "<<endl;
	gotoxy(20,52);
	cout<<"      | |     | |          |                      #    | |                       | |          # "<<endl;
	gotoxy(20,53);
	cout<<"      | |_____| |          |                      #    | |_______________________| |          # "<<endl;
	gotoxy(20,54);
	cout<<"      |         |          |                      #    |___________________________|          # "<<endl;
	gotoxy(20,55);
	cout<<"      |         |          |                      #              /       \\                   # "<<endl;
	gotoxy(20,56);
	cout<<"      |         |          |                      #             /         \\                  # "<<endl;
	gotoxy(20,57);
	cout<<"      |         |          |                      #            /___________\\                 # "<<endl;
	gotoxy(20,58);
	cout<<"      |         |          |                      #        LCD                                # "<<endl;
	gotoxy(20,59);
	cout<<"      |         |          |                      #        price=$50                          # "<<endl;
	gotoxy(20,60);
	cout<<"      |--------------------|                      #                                           # "<<endl;
	gotoxy(20,61);
	cout<<"                                                  #                                           # "<<endl;
	gotoxy(20,62);
	cout<<"################################################################################################"<<endl;
}
if(choice==2){
	gotoxy(20,63);
	cout<<"##########################################################################################################"<<endl;
	gotoxy(20,64);	
	cout<<"#  ________________                                #         ___________________                         # "<<endl;
	gotoxy(20,65);
	cout<<"# |                |                               #       |                   |  Galaxy S23             # "<<endl;
	gotoxy(20,66);
	cout<<"# |*******||*******|   google pixel 4A             #       | _______           |                         # "<<endl;
	gotoxy(20,67);
	cout<<"# |*******||*******|                               #       || OO    |          |  Resolution 1440 x 3088 #  "<<endl;
	gotoxy(20,68);
	cout<<"# |                |  Resolution1080 x 2340 pixels #       ||       |          |               pixels    # "<<endl;
	gotoxy(20,69);
	cout<<"# |                |                               #       ||_______|          |   price=$420            # "<<endl;
	gotoxy(20,70);
	cout<<"# |     google     |  price=$134                   #       |                   |                         # "<<endl;
	gotoxy(20,71);
	cout<<"# |     pixel      |                               #       |                   |                         # "<<endl;
	gotoxy(20,72);
	cout<<"# |                |                               #       |    SAMSUNG        |                         #"<<endl;
	gotoxy(20,73);
	cout<<"# |                |                               #       |                   |                         # "<<endl;
	gotoxy(20,74);
	cout<<"# |                |                               #       |                   |                         # "<<endl;
	gotoxy(20,75);
	cout<<"# |                |                               #       |                   |                         # "<<endl;
	gotoxy(20,76);
	cout<<"# |________________|                               #       |___________________|                         # "<<endl;
	gotoxy(20,77);
	cout<<"##########################################################################################################"<<endl;


}

}


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}





GAME 



#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void print_maze();
void print_tank();
void erase_tank();
void move_tankleft();
void move_tankright();
void move_tankup();
void move_tankdown();
void print_enemy1();
void erase_enemy1();
void move_enemy1();
void print_enemy2();
void erase_enemy2();
void move_enemy2();
int eX=2,eY=12;
int aX=73,aY=2;
int bX=73,bY=9;


main(){
	system("cls");
	print_maze();

	print_enemy1();
    print_enemy2();
	print_tank();
	
while(true){
if(GetAsyncKeyState(VK_LEFT))
{
move_tankleft();
}

if(GetAsyncKeyState(VK_RIGHT))
{
move_tankright();
}
if(GetAsyncKeyState(VK_UP))
{
move_tankup();
}
if(GetAsyncKeyState(VK_DOWN))
{
move_tankdown();
}

move_enemy1();
move_enemy2();
Sleep(200);

}









}

void print_maze(){
	system("cls");
	cout<<"###################################################################################################"<<endl;
	cout<<"##                                       #       #                                               ##"<<endl;
	cout<<"##                                       #       #                                               ##"<<endl;
	cout<<"##                                       #########                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                         @@@@@@@@@@@@                                          ##"<<endl;
	cout<<"##                                         @          @                                          ##"<<endl;
	cout<<"##                                         @          @                                          ##"<<endl;
	cout<<"##                                         @          @                                          ##"<<endl;
	cout<<"##                                         @@@@@@@@@@@@                                          ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"##                                                                                               ## "<<endl;
	cout<<"##                                                                                               ##"<<endl;
	cout<<"###################################################################################################"<<endl;

}
void print_tank(){
	gotoxy(eX,eY);
	cout<<"    __           "<<endl;
	gotoxy(eX,eY+1);	
	cout<<" --||||||||========= "<<endl;
	gotoxy(eX,eY+2);
	cout<<" [|||||||||||||]     "<<endl;
	gotoxy(eX,eY+3);
	cout<<" \\ooooooooooo/      "<<endl;
	gotoxy(eX,eY+4);
}
void erase_tank(){
	gotoxy(eX,eY);
	cout<<"                     "<<endl;
	gotoxy(eX,eY+1);	
	cout<<"                     "<<endl;
	gotoxy(eX,eY+2);
	cout<<"                     "<<endl;
	gotoxy(eX,eY+3);
	cout<<"                     "<<endl;
	gotoxy(eX,eY+4);
}
void move_tankleft(){
if(getCharAtxy(eX-1,eY)==' '){
	erase_tank();
	eX=eX-1;
	print_tank();
	Sleep(10);

}
}

void move_tankright(){
if(getCharAtxy(eX + 21,eY)==' ' && getCharAtxy(eX + 21,eY + 1)==' ' && getCharAtxy(eX + 21,eY + 2)==' ' && getCharAtxy(eX + 21,eY + 3)==' '){
	erase_tank();
	eX=eX+1;
	print_tank();
	Sleep(10);
}
}	

void move_tankup(){
if(getCharAtxy(eX,eY+22)==' '){
	erase_tank();
	eY=eY-1;
	print_tank();
	Sleep(10);
}
}	
void move_tankdown(){
if(getCharAtxy(eX,eY + 4)==' '){
	erase_tank();
	eY=eY+1;
	print_tank();
	Sleep(10);
}	



}

void print_enemy1(){
	gotoxy(aX+2,aY);
	cout<<"      _"<<endl;
	gotoxy(aX+2,aY+1);
	cout<<"*====|_\\"<<endl;
	gotoxy(aX+2,aY+2);
	cout<<" _/             \\"<<endl;
	gotoxy(aX+2,aY+3);
	cout<<"/__|"<<endl;
	gotoxy(aX+2,aY+4);
	cout<<"\\()()()()()/" <<endl;
}

void erase_enemy1(){
    gotoxy(aX+2,aY);
    cout<<"                   "<<endl;
    gotoxy(aX+2,aY+1);
    cout<<"                    "<<endl;
    gotoxy(aX+2,aY+2);
    cout<<"                   "<<endl;
    gotoxy(aX+2,aY+3);
    cout<<"                    "<<endl;
    gotoxy(aX+2,aY+4);
    cout<<"                      "<<endl;
}

void move_enemy1(){
	erase_enemy1();
	aY=aY+1;
	if(aY==11){
	aY=2;
}
print_enemy1();



}


void print_enemy2(){
	gotoxy(bX+2,bY);
	cout<<"        _ /_"<<endl;
	gotoxy(bX+2,bY+1);
	cout<<"======/      |"<<endl;
	gotoxy(bX+2,bY+2);
	cout<<" /_|_"<<endl;
	gotoxy(bX+2,bY+3);
	cout<<"/ __ \\"<<endl;
	gotoxy(bX+2,bY+4);
	cout<<"\\/============\\/"<<endl;
	gotoxy(bX+2,bY+5);
	cout<<"  '-==========-'   "<<endl;
}

void erase_enemy2(){
    gotoxy(bX+2,bY);
    cout<<"              "<<endl;
    gotoxy(bX+2,bY+1);
    cout<<"              "<<endl;
    gotoxy(bX+2,bY+2);
    cout<<"                  "<<endl;
    gotoxy(bX+2,bY+3);
    cout<<"                    "<<endl;
    gotoxy(bX+2,bY+4);
    cout<<"                     "<<endl;
    gotoxy(bX+2,bY+5);
    cout<<"                    "<<endl;
}

void move_enemy2(){
	erase_enemy2();
	bY=bY+1;
	if (bY==18){
	bY=9;
	}
print_enemy2();
}




char getCharAtxy(short int x, short int y){
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';

}









void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}






















