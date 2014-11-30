#include <iostream>
using namespace std;
int main(){
	int Hour, Minute, Second;


	cout << "To get total seconds," << endl << "please enter in the elapsed time for an event in hours, minutes and seconds:    ";
	cin >> Hour >> Minute >> Second;
	int HourToSec = Hour * 60 * 60;
	int MinToSec = Minute * 60;

	cout << HourToSec + MinToSec + Second << " Seconds have elasped" << endl;

	return 0;
}





