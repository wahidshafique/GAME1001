#include <iostream>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
using namespace std; 

char matrix[3][3];

void initialize_game(){
	for(int i=0; i<=2; i++) 
		for(int j=0; j<=2; j++)
			matrix[i][j]= ' ';
}
void draw(){
	for(int i=0; i<=2; i++){
		cout << matrix[i][0] << "|"
			 << matrix[i][1] << "|"
			 << matrix[i][2];
		if (i!=2) cout << endl << "-|-|-"<< endl; 
	}
	cout << endl; 
}
void get_player_move(){
	cout << "Enter X,Y coordinates for your move: ";
	int x,y; 
	cin >> x >> y; 
	x--; y--; 
	// check if position x,y is empty 
	if (matrix[x][y]!=' '){
		cout << "invalid move"<<endl;
		get_player_move(); 
	} else matrix[x][y]='X'; 
}
void get_computer_move(){
	// generate random between 0 and 2 
	int x,y; 
	do{
		x=rand()%3;
		y=rand()%3;
	} while(matrix[x][y]!=' ');	
	matrix[x][y]='O';
}
bool isAWinner(char player){
	// check if row 0 is all 
	for (int i=0;i<3;i++){
	if(matrix[i][0]==player &&
		matrix[i][1]==player &&
		matrix[i][2]==player)
		return true; 
}
	for (int i=0;i<3;i++){
	if(matrix[0][i]==player &&
		matrix[1][i]==player &&
		matrix[2][i]==player)
		return true; 
}
	return false; // default case 
}
int main(){
	// initialize my random seed 
	// based on system time 
	srand (time(NULL)); 
	initialize_game(); 
	bool done=false; 
	int winner=0; // 1 is player and 2 is computer 
	do{
		draw(); 
		get_player_move(); 
		done=isAWinner('X');
		if(done==true) {winner=1; break;} 
		get_computer_move(); 
		done=isAWinner('O');
		if(done==true) {winner=2; break;} 
	}while(true);
	draw();
	if(winner == 1) cout << "congrats"<<endl;
	else cout <<"loser"<<endl; 
	return 0; 
}