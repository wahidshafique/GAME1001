#include <iostream>
using namespace std;
int main(){
	int total = 0;
	for (int i = 1; i <= 7; i++){
		for (int j = 1; j <= i; j++){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}