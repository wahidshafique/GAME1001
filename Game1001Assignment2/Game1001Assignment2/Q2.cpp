#include <iostream>
using namespace std;
int main() {
	unsigned short int numbers, min, max, i=1, initial;
	cin >> initial;
	cin >> numbers;
	max = min = numbers;
	while (i < initial)
	{
		cin >> numbers;
		if (min>numbers) min = numbers;
		else if (max < numbers)
			max = numbers;
		i++;
	}
	cout << min << endl << max << endl;
	return 0; 
}
