#include <iostream>
using namespace std;
int main() {
	int input;
	int start = 1;
	cin >> input;
	int result = 0;
	for (int i = start; i <= input; i += 2){
		result += i;
	}
	cout << result;
}