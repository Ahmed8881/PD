#include <windows.h>
#include<iostream>

using namespace std;

void printMaze();
void gotoxy(int x, int y);
void movePlayer(int x, int y);

main()
{
 system("cls");
 printMaze();	

 int x=10,y=4;  
 int wallHit = 0;

 while(true){
   movePlayer(x,y);
   if (wallHit == 0){
     y = y + 1;  
}
   if (y > 7){  
     wallHit = 1;
}
   if (wallHit == 1){
     y = y - 1;
}
   if (y < 2){
     wallHit = 0; 
}

}

}

void movePlayer(int x, int y)
{
 gotoxy(x,y);
 cout << "P";
 Sleep(200);
 gotoxy(x,y);
 cout << " ";
}

void printMaze()
{
 cout << "#######################" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#######################" << endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}