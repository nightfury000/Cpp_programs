/*
output should be in format as follows

     1
    121
   12321
  1234321
 123454321  

*/



#include<iostream>
using namespace std;
int main() {

	int i, j, k, l, n;
	cout << "Enter the range " << endl;
	cin >> n;
	for(i = 1; i<=n; i++){
		for(j = 1; j<=n-i; j++){
			cout << " ";
		}
		for(k=1; k<=i; k++){
			cout << k;
		}
		for(l=i-1; l>=1; l--){
			cout << l;
		}
		cout << endl;
	}

	return 0;

}