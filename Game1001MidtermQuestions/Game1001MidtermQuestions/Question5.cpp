#include <iostream>
using namespace std;
int main() {
	int input = 100;
	int result = 0;
	for (int i = 0; i <= input; i += 3){
		result += i;
	}
	cout << result;
}