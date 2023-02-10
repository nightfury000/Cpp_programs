#include<iostream>
using namespace std;
int main() {
	int n, i;
	bool is_prime = true;
	cout << "Enter the number" << endl;
	cin >> n;

	if(n == 0 || n == 1){
		is_prime = false;
	}

	for(i = 2; i < n; i++){
		if(n % i == 0){
			is_prime = false;
			break;
		}
	}

	if(is_prime){
		cout << n << " is a prime number";
	}
	else
		cout << n << " is not a prime number";




	return 0;
}
