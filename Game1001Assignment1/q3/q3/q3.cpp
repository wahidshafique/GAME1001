#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
const double Pi = 3.1416;
//Wahid Shafique
int main(){
	ifstream inData;
	inData.open("myFile.txt");
	if (inData.fail()){
		cerr << "Error" << endl;
		exit(1);
	}

	//Rectangle 
	double RectLength, RectWidth;

	inData >> RectLength >> RectWidth;

	double RectArea = RectLength*RectWidth;
	double RectPerimeter = 2 * (RectLength + RectWidth);
	cout << "*******Rectangle*******" << endl << endl
		<< "Rectangle Length: " << RectLength << endl
		<< "Rectangle Width: " << RectWidth << endl
		<< "Rectangle Area: " << RectArea << endl
		<< "Rectangle Perimeter: " << RectPerimeter << endl << endl;

	//Circle
	double CircRadius;
	inData >> CircRadius;

	double CircArea = Pi*CircRadius*CircRadius;
	double CircCircumference = 2 * Pi*CircRadius;
	cout << "*******Circle*******" << endl << endl
		<< "Circle Radius: " << CircRadius << endl
		<< "Circle Area: " << CircArea << endl
		<< "Circle Circumference: " << setprecision(4) << CircCircumference << endl << endl;
	//Bank Info
	string FirstName, LastName;
	int Age;
	long double BeginningBalance;
	double InterestRate;

	inData >> FirstName >> LastName >> Age >> BeginningBalance >> InterestRate;

	double InterestRateDecimal = InterestRate / 100;
	long double EndInterest = BeginningBalance * InterestRateDecimal*0.0833333;
	long double EndBalance = EndInterest + BeginningBalance;
	cout << "*******Bank Info*******" << endl << endl
		<< "Name: " << FirstName << " " << LastName << endl
		<< "Age: " << Age << endl
		<< "Beginning Balance: " << setprecision(7) << BeginningBalance << endl
		<< "Interest Rate: " << InterestRate << endl
		<< "Balance at end of the month: " << setprecision(7) << EndBalance << endl << endl;

	inData.close();
	return 0;
}





