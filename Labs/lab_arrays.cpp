#include <cmath>
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

static int xVal=0, yVal=0;
int const asteroid_num=100;

int arrayAsteroidX[asteroid_num];
int arrayAsteroidY[asteroid_num];

void gotoxy( int x, int y ){
    COORD p = { x, 100-y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

void drawScene(char ch) {
	for (int i=0;i<asteroid_num;i++){
		gotoxy(arrayAsteroidX[i]-xVal
			, arrayAsteroidY[i]-yVal);
		cout<<ch;}
	gotoxy(20,30);
	cout<<" ";
}

void setup (){
	srand(time(0));
	for (int i=0;i<asteroid_num;i++) {
	arrayAsteroidX[i]=rand()%40+1;
	arrayAsteroidY[i]=rand()%20+1;
	}
}

void keyInputf(unsigned char key){
	    switch(key)
        {
		case 'w': yVal++;break;

		case 'a': xVal--;break;
		case 's': yVal--;break;
		case 'd': xVal++;break;
		}
}

void main()
{
	char ch=0;
	setup(); 
    do
    {
		drawScene('o'); 
		gotoxy(20, 10 );
		cout << "+";
        ch = _getch(); 
		 drawScene(' '); 
		keyInputf(ch); 
 
    }while (ch != 'Q' && ch!='q');
}