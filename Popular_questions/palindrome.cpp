
#include<iostream>
using namespace std;
int main(){

	int n, rev = 0, rem, temp;                  // program same as rev number just add an extra temp variable as value of n changes in the program and we have to compare it later.
	cout << "Enter the number" << endl;
	cin >> n;
	temp = n;

	while(n!=0){
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
	}

	if (temp == rev){
		cout << "number is palindrome" << endl;
	}
	else {
		cout << "number is not a palindrome" << endl;
	}

	return 0;
}
