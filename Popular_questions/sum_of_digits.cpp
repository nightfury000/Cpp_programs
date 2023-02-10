#include<iostream>
using namespace std;
int main() {
	int n, sum = 0, rem;
	cout << "Enter the number" << endl;
	cin >> n;

	while(n>0){
		rem = n%10;
		sum = sum + rem;
		n = n/10;



	}

	cout << "Sum is " << sum << endl;


	return 0;
}