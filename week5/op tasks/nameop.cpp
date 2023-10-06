#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void print_name();

main()
{
  
 print_name();  


}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void print_name()
{
 int x = 50;
  gotoxy(x,2);
 cout << " ##########     #         #    ###       ###   ##########   ########            " << endl;
  gotoxy(x,3);
 cout << " ##      ##     #         #    #  ##   ##  #   #            #       ##         " << endl;
  gotoxy(x,4);
 cout << " ##########     ##########     #    ##     #   #########    #         ##        " << endl;
  gotoxy(x,5);
 cout << " ##      ##     #         #    #           #   #            #       ##         " << endl;
  gotoxy(x,6);
 cout << " ##      ##     #         #    #           #   ###########  #    ##            " << endl;

} 