#include <iostream>
using namespace std;

int main(){
	int input, j;
	cin >> input;
	for (input = input; input >= 1; input = input - 1)
	{
		for (j = 1; j <= input; j = j + 1)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}