#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double input = 100.5;
	double result = 0;
	for (double i = 1.5; i <= input; i++){
		result += pow(i, 2.0);
	}
	cout << result;
}