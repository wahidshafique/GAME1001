// Suppose that name is a variable of type string. 
//Write the input statement to read and store the input 
//	Brenda Clinton in name. (Assume that the
//input is from the standard input device.)
#include <iostream>
#include <string>
using namespace std; 
int main(){
	string name; 
	// cin >> name; 
	getline(cin,name); 
	cout << name; 
}