#include<iostream>
using namespace std;
int main() {

	int i, number, fact = 1;
	cout << "Enter any number";
	cin >> number;

	for(i = 1; i<=number; i++){
		fact = fact*i;
	}

	cout << "Factorial is: " << fact << endl; 




	return 0;
}