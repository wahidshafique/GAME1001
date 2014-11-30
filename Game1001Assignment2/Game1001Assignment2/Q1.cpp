#include <iostream>
using namespace std;

int main() {

  double a, b, c;

  cin >> a >> b >> c;

  if (a < b) {
    if (a < c) {
		if (b < c) cout << c << endl << b << endl << a << endl;
		else cout << b << endl << c << endl << a << endl;
    }
	else cout << c << endl << a << endl << b << endl;
  } else {
    if (b < c) {
		if (a < c) cout << c << endl << a << endl << b << endl;
	  else cout << a << endl << c << endl << b << endl;
	}
	else cout << a << endl << b << endl << c << endl;
  }

  return 0;
}