// GCD(Greatest common divisor) = HCF(Highest Common Factor)
//GCD of 8, 20 is 8 = 2*2*2, 20 = 2*2*5, so here HCF is 2*2 = 4

#include<iostream>
using namespace std;

int main() {

	int n1, n2, hcf;
	cout << "Enter two numbers:" << endl;
	cin >> n1 >> n2;

	if( n1 > n2){
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}

	for(int i = 1; i <= n2; ++i) {
		if(n1%i == 0 && n2%i == 0){
			hcf = i;
		}
	}
	cout << "HCF = " << hcf;





	return 0;
}