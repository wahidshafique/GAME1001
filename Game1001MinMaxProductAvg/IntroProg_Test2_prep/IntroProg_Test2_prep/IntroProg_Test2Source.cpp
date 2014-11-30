
#include <iostream>
using namespace std;
int main() {
	double initial, numbers, i = 0, sum = 0, mult = 1, min, max, avg;

    cout << "Enter the amount of numbers to be calculated > " << flush;
	cin >> initial;
    cout << "The sum of all numbers is > "<< flush;  
	max = 0;
	min = 60000;

	while (i<initial){

		cin >> numbers;

		sum += numbers;

		mult *= numbers;

		if (min > numbers) min = numbers;
		else if (max < numbers)
			max = numbers;

		i++;
	}

	avg = sum / initial;
	cout << "The sum of all numbers is: " << sum << endl;
	cout << "The product of all numbers is: " << mult << endl;
	cout << "The minimum of all numbers is: " << min << endl;
	cout << "The maximum of all numbers is: " << max << endl;
	cout << "The average of all numbers is: " << avg << endl;

	return 0;
}
