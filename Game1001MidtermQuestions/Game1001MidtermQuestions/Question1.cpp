#include <iostream>
#include <string>
using namespace std;
int main() {
	int input;
	int minimum = 60000;
	for (int i = 0; i < 6; i++){
		cin >> input;
		if (minimum > input) {
			minimum = input;
		}
	}
	cout << minimum;
}
