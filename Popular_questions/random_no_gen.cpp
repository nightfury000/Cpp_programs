/*

#include<iostream>
#include<cstdlib>		//<cstdlib> is header file used for pseudo-random number generation, memory allocation, searching, sorting.
using namespace std;
int main() {
	int n;
	cout << "Enter how many random numbers you want: " << endl;
	cin >> n;
	for (int i=0; i<n; i++){
		cout << rand() << " ";				//it generates random numbers but everytime they are similar for e.g value of n=1 2345, n=2 2345 5645.
	}	


	return 0;
}
*/

/*
//for generating random numbers upto a number

#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
		int n;
		cout << "Enter how many random numbers you want: " << endl;
		cin >> n;
		for(int i=0; i<n; i++){
				cout << rand() % 100 << " " ; // in case n=6 41 67 34 0 69 24 if n=5 then first 5 will be same
			}
		
		
		return 0;
	}
*/	

	
//for generating random number between two specified numbers

#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
		int n;
		cout << "Enter how many random numbers you want: " << endl;
		cin >> n;
		for(int i=0; i<n; i++){
				cout << rand() % 30 + 100 << " " ; // it will generate random numbers from between 100 to 130
			}
		
		
		return 0;
	}
	
	
	
