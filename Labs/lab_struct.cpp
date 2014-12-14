#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <ctime>
using namespace std;

const int ROWS=10;
const int COLUMNS=20;
int xVal=5;
int yVal=5;
void gotoxy(int ,int);

struct asteroid {
	float centerX; //field or properties 
	float centerY;
	int radius;
	void initialize (float x, float y, int r){
		centerX=x;
		centerY=y;
		radius=r;
	}

	void draw (){
		gotoxy (centerX, centerY);
		switch (radius){
		case 0:cout<<' ';break;
		case 1:cout<<'.';break;
		case 2:cout<<'o';break;
		case 3:cout<<'O';break;
		}
	}
};

void gotoxy( int x, int y )
{
	COORD p = { x+40, 100-y };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}
asteroid arrayAsteroid[ROWS][COLUMNS];

void setup(){
	for (int i=0;i<ROWS;i++)
		for (int j=0;j<COLUMNS;j++){
			arrayAsteroid[i][j].initialize(j,i,rand()%4);
		}
}



void drawScene(char playerch){
	for (int i=0;i<ROWS;i++){
		for (int j=0;j<COLUMNS;j++){
			arrayAsteroid[i][j].draw();

		}
	}
	gotoxy (xVal,yVal);
	cout<<playerch;
}
void keyInputf(unsigned char key)
{
	switch(key)
	{
	case 'w':yVal++;  break;
	case 'a':xVal--;  break;
	case 's':yVal--;    break;
	case 'd':xVal++;       break;
	case 27:exit(0);break;
	}

}

void main()
{
	char ch=0;
	setup(); 
	do
	{
		drawScene('+');  
		ch = _getch(); 
		drawScene(' '); 
		keyInputf(ch); 
		cin.sync();

	}while (ch != 'Q' && ch!='q'); 
}