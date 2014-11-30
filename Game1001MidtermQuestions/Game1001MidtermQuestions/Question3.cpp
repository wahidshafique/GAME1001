#include <iostream>
using namespace std;
int main() {
	int k = 1;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int l = 0; l < 2; l++){
				for (int z = 0; z < 2; z++){
					cout << k++ << " ";
				}
			}
			cout << endl;
		}

	}

}